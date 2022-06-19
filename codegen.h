#ifndef CODEGEN_H
#define CODEGEN_H

#include "defs.h"

// funkcije za zauzimanje, oslobadjanje registra
int  take_reg(void);
void free_reg(void);
// oslobadja ako jeste indeks registra
void free_if_reg(int reg_index); 

// ispisuje simbol (u odgovarajucem obliku) 
// koji se nalazi na datom indeksu u tabeli simbola
void gen_sym_name(struct num_exp_vals *symbol);

// generise CMP naredbu, parametri su indeksi operanada u TS-a 
void gen_cmp(struct num_exp_vals *op1_index, struct num_exp_vals *op2_index);

// generise MOV naredbu, parametri su indeksi operanada u TS-a 
void gen_mov(struct num_exp_vals *input_index, struct num_exp_vals *output_index);

// generise MOV naredbu za element niza
void gen_mov_arr_el(int input_index, int offset, int output_index);

void gen_sym_name_arr_el(int index, int offset);

void gen_mov_from_arr_el(int input_index, int output_index, int offset);

#endif
