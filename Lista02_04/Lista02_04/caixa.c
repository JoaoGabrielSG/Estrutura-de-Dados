//
//  caixa.c
//  Lista02_04
//
//  Created by joão gabriel on 15/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include "caixa.h"

int quantidade_lancamentos_despesa_mes(struct livro_caixa vetor[], int tamanho){
    int quantidade = 0;
    
    for(int i = 0; i <= tamanho; i++){
        if(vetor[i].data_lancamento.mes == 1){
            if(vetor[i].data_lancamento.ano == 2005){
                if (vetor[i].tipo == 'D') {
                    quantidade++;
                }
            }
        }
    }
    return quantidade;
}

int despesas_receitas_2005(struct livro_caixa vetor[], int tamanho){
    int quantidade = 0;
    
    for (int i=0; i<=0; i++) {
        if (vetor[i].data_lancamento.ano == 2005) {
            quantidade++;
        }
    }
    return quantidade;
}

int saldo_marco_2015(struct livro_caixa vetor[], int tamanho){
    int receita_anterior = 0;
    int despesa_anterior = 0;
    
    int receita = 0;
    int despesa = 0;
    
    for (int i=0; i<= tamanho; i++) {
        if (vetor[i].data_lancamento.ano < 2005) {
            if(vetor[i].tipo =='R'){
                receita_anterior += vetor[i].valor;
            }else if (vetor[i].tipo == 'D'){
                despesa_anterior += vetor[i].valor;
            }
        }
        else if (vetor[i].data_lancamento.ano == 2005 && vetor[i].data_lancamento.mes < 3){
            if(vetor[i].tipo =='R'){
                receita_anterior += vetor[i].valor;
            }else if (vetor[i].tipo == 'D'){
                despesa_anterior += vetor[i].valor;
            }
        }else if (vetor[i].data_lancamento.ano == 2005 && vetor[i].data_lancamento.mes == 3){
            if(vetor[i].tipo =='R'){
                receita += vetor[i].valor;
            }else if (vetor[i].tipo == 'D'){
                despesa += vetor[i].valor;
            }
        }
    }
    
    return ((receita_anterior - despesa_anterior) + (receita - despesa));
    
}


