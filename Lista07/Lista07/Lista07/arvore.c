//
//  arvore.c
//  Lista07
//
//  Created by joão gabriel on 15/01/17.
//  Copyright © 2017 bepid. All rights reserved.
//

#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>


Arvore *Inicializa()
{
    return NULL;
}

Arvore *CriaArvore(Arvore *Raiz,int Valor)
{
    Arvore *Novo = (Arvore*)malloc(sizeof(Arvore));
    (Novo)->valor = Valor;
    (Novo)->Celula_Direita = (Novo)->Celula_Esquerda = Inicializa();
    return Novo;
}

void ResVazia(Arvore *Raiz)
{
    if(Raiz == NULL)
    {
        printf("\nÁrvore Vazia");
        return;
    }
    printf("\nÁrvore com Elementos ");
    
}

void Imprime_Arvore(Arvore *Raiz)
{
    if (!(Raiz == NULL))
    {
        printf("(");
        Imprime_Arvore(Raiz->Celula_Esquerda);
        printf("%d",Raiz->valor);
        Imprime_Arvore(Raiz->Celula_Direita);
        printf(")");
    }
}

Arvore* Esvaziar(Arvore *Raiz)
{
    if (!(ehVazia(Raiz)))
    {
        Esvaziar(Raiz->Celula_Direita);
        Esvaziar(Raiz->Celula_Esquerda);
        free(Raiz);
    }
    return Raiz = Inicializa();
}


Arvore* ResPesquisa(Arvore *Raiz,int Dado)
{
    if(Raiz != NULL)
    {
        printf("\nencontrado = %d",Raiz->valor);
        return Raiz;
    }
    else
    {
        printf("\nnão encontrado");
        return NULL;
    }
}

Arvore* Pesquisa(Arvore *Raiz,int Dado,int Tamanho)
{
    if(Raiz == NULL)
    {
        printf("não encontrado");
        return NULL;
    }
    else
    {
        if(Raiz->valor != Dado)
        {
            if(Dado < Raiz->valor && Tamanho >= 0)
            {
                Pesquisa(Raiz->Celula_Esquerda,Dado,Tamanho--);
            }
            else
            {
                if(Tamanho > 0)
                {
                    Pesquisa(Raiz->Celula_Direita,Dado,Tamanho--);
                }
            }
        }
        else
        {
            if(Tamanho > -1)
            {
                printf("encontrado =  %d",Raiz->valor);
            }
        }
    }
    return Raiz;
    
}

Arvore* Insere_Dados(Arvore **Raiz,int Dado)
{
    if (*Raiz == NULL)
    {
        *Raiz = (Arvore*)malloc(sizeof(Arvore));
        *Raiz = CriaArvore(*Raiz,Dado);
    }
    else
    {
        if(Dado < (*Raiz)->valor)
        {
            Insere_Dados(&(*Raiz)->Celula_Esquerda, Dado);
        }
        else
        {
            Insere_Dados(&(*Raiz)->Celula_Direita, Dado);
        }
    }
    return *Raiz;
}

Arvore *Consulta_PREORDEM(Arvore *Raiz,int Dado,int tamanho)
{
    if(Raiz == NULL)
    {
        return NULL;
    }
    else
    {
        if(Dado == Raiz->valor)
        {
            printf("\nencontrado = %d",Raiz->valor);
            return Raiz;
        }
        Consulta_PREORDEM(Raiz->Celula_Esquerda,Dado,tamanho--);
        Consulta_PREORDEM(Raiz->Celula_Direita,Dado,tamanho--);
    }
    if(tamanho < 0)
    {
        printf("\nnão encontrado = %d",Dado);
    }
    return NULL;
}

Arvore *Consulta_ORDEM(Arvore *Raiz,int Dado,int tamanho)
{
    if(Raiz == NULL)
    {
        return NULL;
    }
    else
    {
        Consulta_ORDEM(Raiz->Celula_Esquerda,Dado,tamanho--);
        if(Dado == Raiz->valor)
        {
            printf("\nencontrado = %d",Raiz->valor);
            return Raiz;
        }
        Consulta_ORDEM(Raiz->Celula_Direita,Dado,tamanho--);
    }
    if(tamanho < 0)
    {
        printf("\nnão encontrado = %d",Dado);
    }
    return NULL;
}


Arvore *Consulta_POSORDEM(Arvore *Raiz,int Dado,int tamanho,int key)
{
    if(Raiz != NULL)
    {
        Consulta_POSORDEM(Raiz->Celula_Esquerda,Dado,tamanho--,key);
        Consulta_POSORDEM(Raiz->Celula_Direita,Dado,tamanho--,key);
        if(tamanho < key)
        {
            if(Raiz->valor == Dado)
            {
                printf("\nencontrado = %d",Raiz->valor);
                key = 0;
                return Raiz;
            }
        }
        else
        {
            if(key != 0)
            {
                printf("\nnão encontrado");
            }
        }
        tamanho++;
    }
    return NULL;
}

void ResPOSORDEM(Arvore* Raiz,int Dado,int tamanho)
{
    Arvore *temp = Consulta_POSORDEM(Raiz,Dado,tamanho,tamanho);
    if(temp->valor == Dado)
    {
        printf("\nencontrado");
    }
    else
    {
        printf("\nnão encontrado");
    }
}

void Imprimir_PREORDEM(Arvore *Raiz)
{
    if(!(ehVazia(Raiz)))
    {
        printf("%d",Raiz->valor);
        Imprimir_PREORDEM(Raiz->Celula_Esquerda);
        Imprimir_PREORDEM(Raiz->Celula_Direita);
    }
}


void Imprimir_ORDEM(Arvore *Raiz)
{
    if(!(ehVazia(Raiz)))
    {
        Imprimir_ORDEM(Raiz->Celula_Esquerda);
        printf("%d",Raiz->valor);
        Imprimir_ORDEM(Raiz->Celula_Direita);
    }
}

void Imprimir_POSORDEM(Arvore *Raiz)
{
    if(!(ehVazia(Raiz)))
    {
        Imprimir_POSORDEM(Raiz->Celula_Esquerda);
        Imprimir_POSORDEM(Raiz->Celula_Direita);
        printf("%d",Raiz->valor);
    }
}

Arvore* Retira(Arvore* Raiz,int Dado)
{
    if(Raiz == NULL)
    {
        return NULL;
    }
    else
    {
        /////////////////////////////////////////////////////////////////////////
        //PERCORRENDO A ÁRVORE CONFORME CONDIÇÃO DAS DIFERENÇAS
        if(Dado < Raiz->valor)
        {
            Raiz->Celula_Esquerda = Retira(Raiz->Celula_Esquerda,Dado);
        }
        else
        {
            if(Dado > Raiz->valor)
            {
                Raiz->Celula_Direita = Retira(Raiz->Celula_Direita,Dado);
            }
            /////////////////////////////////////////////////////////////////////////
            //CASO---IGUAL PARA DE PERCORRER AS CÉLULA POIS A NÃO DIFERENÇA EQUIVALE A IGUALDADE
            else
            {
                if(Raiz->Celula_Esquerda == NULL && Raiz->Celula_Direita == NULL)//RETIRA QUANDO NÃO HÁ FILHOS
                {
                    free(Raiz);
                    Raiz = Inicializa();
                }
                else
                {
                    if(Raiz->Celula_Esquerda == NULL)//RETIRA QUANDO HÁ UM FILHO À DIREITA
                    {
                        Raiz = Raiz->Celula_Direita;
                        free(Raiz);
                        Raiz = Inicializa();
                    }
                    else
                    {
                        Arvore *temp = Raiz->Celula_Esquerda;//GUARDA A CÉLULA QUE VAI SER O NOVO VALOR DA CÉLULA RAIZ QUE VAI SER RETIRADO
                        while(temp->Celula_Direita != NULL)
                        {
                            temp = temp->Celula_Direita;//ATUALIZAÇÃO DOS PONTEIROS PARA OCUPAR A RAIZ DA SUBARVORE QUE
                        }
                        Raiz->valor = temp->valor;//ATUALIZAÇÃO DA RAIZ DA SUBARVORE
                        temp->valor = Dado;
                        Raiz->Celula_Esquerda = Inicializa();//ELIMINAÇÃO DO PONTEIRO QUE VAI SER RETIRADO POR REINICIALIZAÇÃO.
                        free(temp);
                    }
                }
            }
        }
        return Raiz;
    }
}
