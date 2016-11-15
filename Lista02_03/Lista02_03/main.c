//
//  main.c
//  Lista02_03
//
//  Created by joão gabriel on 15/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct questionario {
    int destino; //1- Camocim, 2- Morro Branco, 3- Aracati, 4- Guaramiranga e 5- Outros Locais
    int veiculo; //1- Automóvel, 2- Caminhão, 3- Ônibus e 4- Outros Veículos
};

int destino_aracati(struct questionario vetor[], int tamanho){
    int quantidade = 0;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].veiculo == 1){
            if(vetor[i].destino == 3){
                quantidade += 1;
            }
        }
    }
    return quantidade;
}


float caminhoes_camocim (struct questionario vetor[], int tamanho){
    float quatidade_caminhoes = 0;
    float quantidade_destino_camocim = 0;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].veiculo == 2){
            quatidade_caminhoes++;
            if (vetor[i].destino == 1) {
                quantidade_destino_camocim++;
            }
        }
    }
    return (quantidade_destino_camocim/quatidade_caminhoes)*100;
}

float porcentagem_onibus(struct questionario vetor[], int tamanho){
    float quantidade_veiculos = tamanho;
    float quantidade_caminhoes = 0;
    
    for (int i =0; i <= tamanho; i++) {
        if (vetor[i].veiculo == 2) {
            quantidade_caminhoes++;
        }
    }
    return (quantidade_caminhoes/quantidade_veiculos)*100;
}


int main(int argc, const char * argv[]) {
    struct questionario feriado[30];
    int tamanho = 0;
    
    
    feriado[0].destino = 1;
    feriado[0].veiculo = 1;
    tamanho++;
    
    feriado[1].destino = 4;
    feriado[1].veiculo = 2;
    tamanho++;
    
    feriado[2].destino = 3;
    feriado[2].veiculo = 1;
    tamanho++;
    
    feriado[3].destino = 1;
    feriado[3].veiculo = 2;
    tamanho++;
    
    
    printf("quantidade aracati: %d \n", destino_aracati(feriado, tamanho));
    printf("porcentagem camocim: %f \n", caminhoes_camocim(feriado, tamanho));
    printf("porcentagem caminhoes: %f \n", porcentagem_onibus(feriado, tamanho));
    
    
    return 0;
}
