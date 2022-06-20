#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "codegen.h"
#include "symtab.h"

extern FILE *output;
int free_reg_num = 0;
char invalid_value[] = "???";

// REGISTERS

int take_reg(void)
{
    if (free_reg_num > LAST_WORKING_REG)
    {
        err("Compiler error! No free registers!");
        exit(EXIT_FAILURE);
    }
    return free_reg_num++;
}

void free_reg(void)
{
    if (free_reg_num < 1)
    {
        err("Compiler error! No more registers to free!");
        exit(EXIT_FAILURE);
    }
    else
        set_type(--free_reg_num, NO_TYPE);
}

// Ako je u pitanju indeks registra, oslobodi registar
void free_if_reg(int reg_index)
{
    if (reg_index >= 0 && reg_index <= LAST_WORKING_REG)
        free_reg();
}

// OTHER

void gen_cmp(struct num_exp_vals *op1_index, struct num_exp_vals *op2_index)
{
    if (get_type(op1_index->first) == INT)
        code("\n\t\tCMPS \t");
    else
        code("\n\t\tCMPU \t");
    gen_sym_name(op1_index);
    code(",");
    gen_sym_name(op2_index);
    free_if_reg(op2_index->first);
    free_if_reg(op1_index->first);
}

void gen_mov(struct num_exp_vals *input_index, struct num_exp_vals *output_index)
{
    //printf("\nprvi: %d\n ", input_index->first);
    //printf("drugi: %d \n", output_index->first);
    code("\n\t\tMOV \t");
    gen_sym_name(input_index);
    code(",");
    gen_sym_name(output_index);

    // ako se smešta u registar, treba preneti tip
    if (output_index->first >= 0 && output_index->first <= LAST_WORKING_REG)
        set_type(output_index->first, get_type(input_index->first));
    free_if_reg(input_index->first);
}

// SYMBOL
void gen_sym_name(struct num_exp_vals *symbol)
{
    if (symbol->first > -1)
    {
        if (get_kind(symbol->first) == VAR) // -n*4(%14)
            code("-%d(%%14)", get_atr1(symbol->first) * 4);
        else if (get_kind(symbol->first) == STACK) 
            code("-%d(%%14)", get_atr1(symbol->first) * 4 + (symbol->second + 1) * 4);
        else if (get_kind(symbol->first) == ARR) // -n*4(%14)
            code("-%d(%%14)", get_atr1(symbol->first) * 4 + (symbol->second + 1) * 4);
        else if (get_kind(symbol->first) == PAR) // m*4(%14)
            code("%d(%%14)", 4 + get_atr1(symbol->first) * 4);
        else if (get_kind(symbol->first) == LIT)
            code("$%s", get_name(symbol->first));
        else // function, reg
            code("%s", get_name(symbol->first));
    }
}

