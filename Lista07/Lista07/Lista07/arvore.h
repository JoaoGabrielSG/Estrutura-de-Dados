//
//  arvore.h
//  Lista07
//
//  Created by joão gabriel on 15/01/17.
//  Copyright © 2017 bepid. All rights reserved.
//

#ifndef arvore_h
#define arvore_h

#include <stdio.h>

#endif /* arvore_h */


struct Arvore
{
    int valor;
    int tamanho;
    struct Arvore *Celula_Esquerda;
    struct Arvore *Celula_Direita;
};
typedef struct Arvore Arvore;



Arvore *Inicializa();
Arvore *CriaArvore(Arvore *Raiz,int Valor);
void ResVazia(Arvore *Raiz);
void Imprime_Arvore(Arvore *Raiz);
Arvore* Esvaziar(Arvore *Raiz);
Arvore* ResPesquisa(Arvore *Raiz,int Dado);
Arvore* Pesquisa(Arvore *Raiz,int Dado,int Tamanho);
Arvore* Insere_Dados(Arvore **Raiz,int Dado);
Arvore *Consulta_PREORDEM(Arvore *Raiz,int Dado,int tamanho);
Arvore *Consulta_ORDEM(Arvore *Raiz,int Dado,int tamanho);
Arvore *Consulta_POSORDEM(Arvore *Raiz,int Dado,int tamanho,int key);
void ResPOSORDEM(Arvore* Raiz,int Dado,int tamanho);
void Imprimir_PREORDEM(Arvore *Raiz);
void Imprimir_ORDEM(Arvore *Raiz);
void Imprimir_POSORDEM(Arvore *Raiz);
Arvore* Retira(Arvore *Raiz,int Dado);







