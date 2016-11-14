//
//  main.c
//  Lista02_02
//
//  Created by joão gabriel on 14/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>

#include <string.h>

struct funcionario {
    char nome[35];
    char sexo; // M - masculino e F - feminino.
    int numero_de_pecas;
};


int quantidade_produzida_homens(struct funcionario vetor[], int tamanho){
    int quantidade = 0;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].sexo == 'M'){
            quantidade += vetor[i].numero_de_pecas;
        }
    }
    return quantidade;
}

int quantidade_produzida_mulheres(struct funcionario vetor[], int tamanho){
    int quantidade = 0;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].sexo == 'F'){
            quantidade += vetor[i].numero_de_pecas;
        }
    }
    return quantidade;
}

struct funcionario funcionario_mais_produtivo(struct funcionario vetor[], int tamanho){
    struct funcionario nome;
    
    for (int i = 0; i <= tamanho; i++) {
        if(vetor[i].numero_de_pecas > nome.numero_de_pecas){
            nome = vetor[i];
        }
    }
    return nome;
}


int main(int argc, const char * argv[]) {
    
    struct funcionario vetor[30];
    int tamanho;
    
    strcpy(vetor[0].nome, "Clinton");
    vetor[0].sexo = 'M';
    vetor[0].numero_de_pecas = 30;
    tamanho++;
    

    strcpy(vetor[1].nome, "Trump");
    vetor[1].sexo = 'M';
    vetor[1].numero_de_pecas = 45;
    tamanho++;
    
    strcpy(vetor[2].nome, "Hillary");
    vetor[2].sexo = 'F';
    vetor[2].numero_de_pecas = 35;
    tamanho++;
    
    struct funcionario nome = funcionario_mais_produtivo(vetor, tamanho);
    
    printf("quantidade homem: %d \n", quantidade_produzida_homens(vetor, tamanho));
    printf("quantidade mulheres: %d \n", quantidade_produzida_mulheres(vetor, tamanho));
    printf("funcionario mais produtivo: %s \n", nome.nome);
}
