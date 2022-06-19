%{
#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
#include "symtab.h"
#include "codegen.h"

    int yyparse(void);
    int yylex(void);
    int yyerror(char *s);
    void warning(char *s);

    extern int yylineno;
    int out_lin = 0;
    char char_buffer[CHAR_BUFFER_LENGTH];
    int error_count = 0;
    int warning_count = 0;
    int var_num = 0;
    int fun_idx = -1;
    int fcall_idx = -1;
    int lab_num = -1;
    int arr_num = 0;
    int literal_list_count = 0;
    int array_literals[100];
    int array_literals_idx = 0;

    int multiplier = -1;
    int stack_sizes[100];
    FILE *output;
%}

%union {
  int i;
  char *s;
  struct num_exp_vals *vals;
}

 

%token <i> _TYPE
%token _IF
%token _ELSE
%token _RETURN
%token <s> _ID
%token <s> _INT_NUMBER
%token <s> _UINT_NUMBER
%token _LPAREN
%token _RPAREN
%token _LBRACKET
%token _RBRACKET
%token _LSQBRACKET
%token _RSQBRACKET
%token _COMMA
%token _ASSIGN
%token _SEMICOLON
%token _DOT
%token _DOUBLE_COLON
%token _STACK
%token _POP
%token _PUSH
%token <i> _AROP
%token _POINTER;
%token <i> _RELOP

%type <vals> num_exp exp
%type <i> literal
%type <i> function_call argument rel_exp if_part size

%nonassoc ONLY_IF
%nonassoc _ELSE

%%

program
: function_list
{
    if (lookup_symbol("main", FUN) == NO_INDEX)
        err("undefined reference to 'main'");
};

function_list
    : function |
      function_list function;

function
    : _TYPE _ID
{
    fun_idx = lookup_symbol($2, FUN);
    if (fun_idx == NO_INDEX)
        fun_idx = insert_symbol($2, FUN, $1, NO_ATR, NO_ATR);
    else
        err("redefinition of function '%s'", $2);

    code("\n%s:", $2);
    code("\n\t\tPUSH\t%%14");
    code("\n\t\tMOV \t%%15,%%14");
}
_LPAREN parameter _RPAREN body
{
    clear_symbols(fun_idx + 1);
    var_num = 0;

    code("\n@%s_exit:", $2);
    code("\n\t\tMOV \t%%14,%%15");
    code("\n\t\tPOP \t%%14");
    code("\n\t\tRET");
};

parameter
    : /* empty */
{
    set_atr1(fun_idx, 0);
}

| _TYPE _ID
{
    if ($1 == INT_PTR)
    {
        insert_symbol($2, ARR_PAR, INT, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, INT);
    }
    else if ($1 == UINT_PTR)
    {
        insert_symbol($2, ARR_PAR, UINT, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, UINT);
    }
    else
    {
        insert_symbol($2, PAR, $1, 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, $1);
    }

}
;

body
    : _LBRACKET variable_list
{
    if (var_num)
        code("\n\t\tSUBS\t%%15,$%d,%%15", 4 * var_num);
    code("\n@%s_body:", get_name(fun_idx));
}
statement_list _RBRACKET;

variable_list
    : /* empty */
      |
      variable_list variable;

variable
    : _TYPE _ID _SEMICOLON
{
    if (lookup_symbol($2, VAR | PAR | ARR) == NO_INDEX)
        insert_symbol($2, VAR, $1, ++var_num, NO_ATR);
    else
        err("redefinition of '%s'", $2);
}
| _TYPE _ID size _SEMICOLON // Definition of an array
{
    if (lookup_symbol($2, VAR | PAR | ARR) == NO_INDEX)
    {
        insert_symbol($2, ARR, $1, ++var_num, $3);
        code("\n\t\tSUBS\t %%15,$%d,%%15", 4 * $3);
    }

    else
        err("redefinition of '%s'", $2);
}
| _TYPE _ID _ASSIGN _LBRACKET literal_list _RBRACKET _SEMICOLON
{
    if (lookup_symbol($2, VAR | PAR | ARR) == NO_INDEX)
    {
        int idx = insert_symbol($2, ARR, $1, ++var_num, literal_list_count);
        code("\n\t\t\tSUBS\t %%15,$%d,%%15", 4 * literal_list_count);
        for (int i = 0; i < literal_list_count; i++)
        {
			struct num_exp_vals lit;
			lit.first = array_literals[i];
			lit.second = -1;

            //printf("\n\tDeklaracija niza: %d", lit.first);
			
			struct num_exp_vals id;
			id.first = idx;
			id.second = i;
           
            gen_mov(&lit, &id);
        }
    }
    else
        err("redefinition of '%s'", $2);

    literal_list_count = 0;
}
| _STACK _DOUBLE_COLON _TYPE _ID size _SEMICOLON
{
    if (lookup_symbol($4, VAR | PAR | ARR) == NO_INDEX){
        int idx = insert_symbol($4, STACK, $3, ++var_num, 0);
        stack_sizes[idx] = $5;
        code("\n\t\tSUBS\t %%15,$%d,%%15", 4 * $5);
    }
    else
        err("redefinition of '%s'", $4);
    print_symtab();
};

literal_list
    : literal
{
    array_literals[literal_list_count] = $1;
    literal_list_count += 1;
}
| literal_list _COMMA literal
{
    array_literals[literal_list_count] = $3;
    literal_list_count += 1;
};

size
    : _LSQBRACKET _INT_NUMBER _RSQBRACKET
{
    $$ = strtol($2, NULL, 10);
}

| _LSQBRACKET _UINT_NUMBER _RSQBRACKET
{
    $$ = strtol($2, NULL, 10);
};

statement_list
    : /* empty */
      |
      statement_list statement;

statement
    : compound_statement |
      assignment_statement | if_statement | return_statement;

compound_statement
    : _LBRACKET statement_list _RBRACKET;

assignment_statement
    : _ID _ASSIGN num_exp _SEMICOLON
{
    int idx = lookup_symbol($1, VAR | PAR);
    if (idx == NO_INDEX)
        err("invalid lvalue '%s' in assignment", $1);
    else if (get_type(idx) != get_type($3->first))
    {
        err("incompatible types in assignment");
    }

    if (get_kind($3->first) != ARR)
    {
        struct num_exp_vals vrati;
        vrati.first = idx;
        vrati.second = -1;
        gen_mov($3, &vrati);
    }
    else
    {
		struct num_exp_vals id;
		id.first = idx;
		id.second = -1;
        gen_mov($3, &id);
    }
}

| _ID size _ASSIGN num_exp _SEMICOLON
{
    int idx = lookup_symbol($1, ARR | ARR_PAR);
    if (get_kind(idx) != ARR_PAR)
    {
        if (idx == NO_INDEX)
            err("invalid lvalue '%s' in assignment", $1);
        else if (get_type(idx) != get_type($4->first))
            err("incompatible types in assignment");
		
		struct num_exp_vals id;
		id.first = idx;
		id.second = $2;
        gen_mov($4, &id);
    }
}
| _ID _DOT _PUSH _LPAREN num_exp _RPAREN _SEMICOLON
{
    int idx = lookup_symbol($1, STACK);
    if (idx == NO_INDEX)
        err("invalid lvalue '%s' in assignment", $1);
    else if (get_type(idx) != get_type($5->first))
        err("incompatible types in assignment");
    else
    {
        int count_elements = get_atr2(idx);
        if (count_elements >= stack_sizes[idx])
            err("exceeded maximum number of elements in stack");
        else{
            count_elements++;
            set_atr2(idx, count_elements);
            struct num_exp_vals id;
		    id.first = idx;
		    id.second = count_elements;
            gen_mov($5, &id);
        }
    }
};

num_exp
    : exp

      |
      num_exp _AROP exp
{
    if (get_type((*$1).first) != get_type((*$3).first))
        err("invalid operands: arithmetic operation");
    int t1 = get_type($1->first);
    code("\n\t\t%s\t", ar_instructions[$2 + (t1 - 1) * AROP_NUMBER]);

    gen_sym_name($1);
    code(",");
    gen_sym_name($3);

    code(",");
    free_if_reg($3->first);
    free_if_reg($1->first);
    struct num_exp_vals vrati;
    vrati.first = take_reg();
    vrati.second = -1;
    $$ = &vrati;
    //$$ = take_reg();
    gen_sym_name($$);
    set_type($$->first, t1);
};

exp
    : literal
{
    struct num_exp_vals *lit = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    lit->first = $1;
    lit->second = -1;
    $$ = lit;
}

| _ID size
{
    int head = lookup_symbol($1, ARR | ARR_PAR);
    if (get_kind(head) != ARR_PAR)
    {
        if ($2 >= get_atr2(head))
            err("'%s' index out of range", $1);

        if (head == NO_INDEX && get_kind(head) != ARR_PAR)
            err("'%s' undeclared", $1);

        struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        vrati->first = head;
        vrati->second = $2;
        $$ = vrati;
    }
}
| _ID
{
    int idx = lookup_symbol($1, VAR | PAR | ARR);
    if (idx == NO_INDEX)
        err("'%s' undeclared", $1);

    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = idx;
    vrati->second = -1;
    $$ = vrati;
}

| _ID _DOT _POP _LPAREN _RPAREN
{
    int idx = lookup_symbol($1, STACK);
    if (idx == NO_INDEX)
        err("'%s' undeclared", $1);

    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    int count_elements = get_atr2(idx);
    if (count_elements <= 0)
        err("nothing to pop from stack");
    else{
        vrati->first = idx;
        vrati->second = count_elements;
        $$ = vrati;
        count_elements--;
        set_atr2(idx, count_elements);
    }   
  
}
| function_call
{
    int idx = take_reg();
	
    struct num_exp_vals fun_reg;
    fun_reg.first = FUN_REG;
    fun_reg.second = -1;

    struct num_exp_vals id;
    id.first = idx;
    id.second = -1;
	
    gen_mov(&fun_reg, &id);
	
    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = idx;
    vrati->second = -1;
    $$ = vrati;
}

| _LPAREN num_exp _RPAREN
{
    struct num_exp_vals *vrati = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
    vrati->first = $2->first;
    vrati->second = -1;
    $$ = vrati;
};

literal
    : _INT_NUMBER
{
    $$ = insert_literal($1, INT);
}

| _UINT_NUMBER
{
    $$ = insert_literal($1, UINT);
};

function_call
    : _ID
{
    fcall_idx = lookup_symbol($1, FUN);
    if (fcall_idx == NO_INDEX)
        err("'%s' is not a function", $1);
}
_LPAREN argument _RPAREN
{
    if (get_atr1(fcall_idx) != $4)
        err("wrong number of arguments");
    code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
    if ($4 > 0)
        code("\n\t\t\tADDS\t%%15,$%d,%%15", $4 * 4);
    set_type(FUN_REG, get_type(fcall_idx));
    $$ = FUN_REG;
};

argument
    : /* empty */
{
    $$ = 0;
}

| num_exp
{
    if (get_atr2(fcall_idx) != get_type($1->first))
        err("incompatible type for argument");
    free_if_reg($1->first);
    code("\n\t\t\tPUSH\t");
    gen_sym_name($1);
    $$ = 1;
};

if_statement
    : if_part %prec ONLY_IF
{
    code("\n@exit%d:", $1);
}

| if_part _ELSE statement
{
    code("\n@exit%d:", $1);
};

if_part
    : _IF _LPAREN
{
    $<i>$ = ++lab_num;
    code("\n@if%d:", lab_num);
}
rel_exp
{
    code("\n\t\t%s\t@false%d", opp_jumps[$4], $<i>3);
    code("\n@true%d:", $<i>3);
}
_RPAREN statement
{
    code("\n\t\tJMP \t@exit%d", $<i>3);
    code("\n@false%d:", $<i>3);
    $$ = $<i>3;
};

rel_exp
    : num_exp _RELOP num_exp
{
    if (get_type($1->first) != get_type($3->first))
        err("invalid operands: relational operator");
    $$ = $2 + ((get_type($1->first) - 1) * RELOP_NUMBER);
    gen_cmp($1, $3);
};

return_statement
    : _RETURN num_exp _SEMICOLON
{
    
    if ((get_type(fun_idx) == INT_PTR && get_kind($2->first) == ARR && get_type($2->first) == INT) ||
        (get_type(fun_idx) == UINT_PTR && get_kind($2->first) == ARR && get_type($2->first) == UINT))
    {
        printf("Povratna vrednost je referenca na niz.");
    }
    else if (get_type(fun_idx) != get_type($2->first))
    {
        err("incompatible types in return");
    }

    if (get_kind($2->first) != ARR)
    {
        struct num_exp_vals *fun_reg = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        fun_reg->first = FUN_REG;
        fun_reg->second = -1;
        
        gen_mov($2, fun_reg);
    }
    else
    {
		struct num_exp_vals *fun_reg = (struct num_exp_vals*) malloc(sizeof(struct num_exp_vals));
        fun_reg->first = FUN_REG;
        fun_reg->second = -1;

        gen_mov($2, fun_reg);
    }
    code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));
}
//  | _RETURN _ID _SEMICOLON
//    {
//        if(get_kind($2) == ARR)
//        {
//             if(get_type(fun_idx) == INT_PTR && get_type($2) != INT)
//                err("incompatible types in return");
//             else if(get_type(fun_idx) == UINT_PTR && get_type($2) != UINT)
//                err("incompatible types in return");
//        }
//    }
;

%%

    int yyerror(char *s)
{
    fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
    error_count++;
    return 0;
}

void warning(char *s)
{
    fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
    warning_count++;
}

int main()
{
    int synerr;
    init_symtab();
    output = fopen("output.asm", "w+");    

    synerr = yyparse();

    clear_symtab();
    fclose(output);

    if (warning_count)
        printf("\n%d warning(s).\n", warning_count);

    if (error_count)
    {
        remove("output.asm");
        printf("\n%d error(s).\n", error_count);
    }

    if (synerr)
        return -1; // syntax error
    else if (error_count)
        return error_count & 127; // semantic errors
    else if (warning_count)
        return (warning_count & 127) + 127; // warnings
    else
        return 0; // OK
}

