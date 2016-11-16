//
//  caixa.h
//  Lista02_04
//
//  Created by joão gabriel on 15/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#ifndef caixa_h
#define caixa_h

#include <stdio.h>
#include "data.h"

struct livro_caixa {
    char situacao;
    struct data data_lancamento;
    char tipo;
    int valor;
};


int quantidade_lancamentos_despesa_mes(struct livro_caixa vetor[], int tamanho);
int despesas_receitas_2005(struct livro_caixa vetor[], int tamanho);
int saldo_marco_2015(struct livro_caixa vetor[], int tamanho);

#endif /* caixa_h */
