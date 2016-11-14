//
//  main.c
//  Lista02_01
//
//  Created by joão gabriel on 13/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct candidato {
    char nome[35];
    char sexo; // M - masculino e F - feminino.
    int idade;
    int experiencia; // 1 - possui experiencia e 2 - nao possui experiencia.
};

float idade_media_homens_experiencia(struct candidato vetor[], int tamanho){
    
    float quantidade = 0;
    float soma = 0;
    
    for(int i; i <= tamanho; i++){
        if(vetor[i].sexo == 'M'){
            if (vetor[i].experiencia == 1) {
                quantidade++;
                soma += vetor[i].idade;
            }
        }
    }
    return soma/quantidade;
}


int quantidade_de_homens(struct candidato vetor[], int tamanho){
    int quantidade = 0;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].sexo == 'M'){
        quantidade++;
        }
    }
    return quantidade;
}

float porcentagem_homens_maior45(struct candidato vetor[], int tamanho){
    float total_homens;
    float maiores45;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].sexo == 'M'){
            total_homens++;
            if (vetor[i].idade > 45) {
                maiores45++;
            }
        }
    }
    return (maiores45/total_homens)*100;
    
}

int mulheres_menores35_com_experiencia(struct candidato vetor[], int tamanho){
    float quantidade;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].sexo == 'F'){
            if (vetor[i].idade < 35) {
                if (vetor[i].experiencia == 1) {
                    quantidade++;
                }
            }
        }
    }
    return quantidade;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct candidato vetor[30];
    int tamanho = 0;
    
    vetor[0].experiencia = 1;
    vetor[0].idade = 75;
    strcpy(vetor[0].nome, "Clinton");
    vetor[0].sexo = 'M';
    tamanho++;
    
    vetor[1].experiencia = 0;
    vetor[1].idade = 70;
    strcpy(vetor[1].nome, "Trump");
    vetor[1].sexo = 'M';
    tamanho++;
    
    vetor[2].experiencia = 1;
    vetor[2].idade = 50;
    strcpy(vetor[2].nome, "Hillary");
    vetor[2].sexo = 'F';
    tamanho++;
    
    printf("quantidade: %d\n", quantidade_de_homens(vetor, tamanho));
    printf("experiencia: %f\n", idade_media_homens_experiencia(vetor, tamanho));
    printf("maiores45: %f\n", porcentagem_homens_maior45(vetor, tamanho));
    printf("mulheres: %d\n", mulheres_menores35_com_experiencia(vetor, tamanho));
}


