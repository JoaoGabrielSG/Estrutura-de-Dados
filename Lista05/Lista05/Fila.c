//
//  Fila.c
//  Lista05
//
//  Created by joão gabriel on 11/12/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include "Fila.h"
#include <stdlib.h>


void iniciaFila(struct lista *lista){
//    struct celula *celula_inicial = (struct celula*)malloc(sizeof(struct celula));
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tamanho = 0;
}

int fila_vazia(struct lista *lista){
    return (lista->inicio == NULL);
}


void inserir_celula(struct lista *lista, int valor){
    struct celula *nova_celula = (struct celula*)malloc(sizeof(struct celula));
    nova_celula->valor = valor;
    nova_celula->proximo = NULL;
    if (lista->inicio != NULL) {
        lista->fim->proximo = nova_celula;
        lista->fim = lista->fim->proximo;
        lista->tamanho++;
    }else{
        lista->inicio = nova_celula;
        lista->fim = nova_celula;
        lista->tamanho++;
    }
}

void imprimir_lista(struct lista *lista){
    struct celula *celula = lista->inicio;
    int tamanho = lista->tamanho;
    int i;
    
    for (i = 0; i<tamanho; i++) {
        printf("%d \n", celula->valor);
        celula = celula->proximo;
    }
}
