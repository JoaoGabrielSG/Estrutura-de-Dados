//
//  Fila.h
//  Lista05
//
//  Created by joão gabriel on 11/12/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#ifndef Fila_h
#define Fila_h

#include <stdio.h>

#endif /* Fila_h */

struct celula {
    int valor;
    struct celula *proximo;
};


struct lista {
    struct celula *fim;
    struct celula *inicio;
    int tamanho;
};

void iniciaFila(struct lista *lista);
int fila_vazia(struct lista *lista);
void inserir_celula(struct lista *lista, int valor);
void imprimir_lista(struct lista *lista);


