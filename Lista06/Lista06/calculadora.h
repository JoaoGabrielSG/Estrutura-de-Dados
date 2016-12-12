//
//  calculadora.h
//  Lista06
//
//  Created by joão gabriel on 10/12/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#ifndef calculadora_h
#define calculadora_h

#include <stdio.h>

#endif /* calculadora_h */


typedef struct no{
    int numero;
    char operador;
    struct no *proximo;
}No;
No* inserirInicio(No* lista, char conteudo);
No* inserirNumero(No* lista, int conteudo);
void noPrint(No*no);
void boxListar(No* lista);
No* strEmpilhar(char *palavra);
No* excluirPrimeiro(No*lista);
int opera(int a, int b, char operador);
//No* resolveParenteses(No* lista);
No* resolvePilha(No* lista);

