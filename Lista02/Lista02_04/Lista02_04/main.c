//
//  main.c
//  Lista02_04
//
//  Created by joão gabriel on 15/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include "caixa.h"

int main(int argc, const char * argv[]) {
    struct livro_caixa caixa[35];
    int tamanho = 0;
    
    caixa[0].data_lancamento.ano = 2005;
    caixa[0].data_lancamento.mes = 03;
    caixa[0].data_lancamento.dia = 23;
    caixa[0].situacao = 'x';
    caixa[0].tipo = 'D';
    caixa[0].valor = 1200;
    tamanho++;
    
    caixa[1].data_lancamento.ano = 2005;
    caixa[1].data_lancamento.mes = 01;
    caixa[1].data_lancamento.dia = 02;
    caixa[1].situacao = '*';
    caixa[1].tipo = 'R';
    caixa[1].valor = 700;
    tamanho++;
    
    printf("Quantidade mes: %d \n", quantidade_lancamentos_despesa_mes(caixa, tamanho));
    printf("Quantidade ano 2015: %d \n", despesas_receitas_2005(caixa, tamanho));
    printf("saldo marco ano 2015: %d \n", saldo_marco_2015(caixa, tamanho));
    
    
    return 0;
}
