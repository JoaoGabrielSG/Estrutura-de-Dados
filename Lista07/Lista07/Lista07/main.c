//
//  main.c
//  Lista07
//
//  Created by joão gabriel on 09/01/17.
//  Copyright © 2017 bepid. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int Menu()
{
    
    printf("\n[- 1 -] Inicializa(Arvore): define um arvore vazia");
    printf("\n[- 2 -] CriarRaiz(Arvore):retorna o nó raiz da árvore que foi criado em Árvore");
    printf("\n[- 3 -] Vazia(Arvore): Função que retorna TRUE se a árvore está vazia e FALSE do contrário");
    printf("\n[- 4 -] Inserir(item):Insere o elemento item na árvore ");
    printf("\n[- 5 -] Consultar(item): Consulta o elemento item na árvore");
    printf("\n[- 6 -] Consultar(item): Consulta o elemento item na árvore em ORDEM;");
    printf("\n[- 7 -] Consultar(item): Consulta o elemento item na árvore em PRÉ-ORDEM");
    printf("\n[- 8 -] Consultar(item):Consulta o elemento item na árvore em PÓS-ORDEM");
    printf("\n[- 9 -] Excluir(item): Exclui o elemento item na árvore");
    printf("\n[- 10 -] Esvazia(Arvore): Função que esvazia a Árvore");
    printf("\n[- 0 -] Sair");
    int op;
    printf("\nOPÇÃO:");
    scanf("%d",&op);
    return op;
}

int main()
{
    Arvore *Raiz = NULL;

    int a = 1;
    while (a == 1)
    {
        int op;
        switch (Menu())
        {
            case 1:
            {
                Raiz = Inicializa();
                break;
            }
            case 2:
            {
                
                printf("Digite o valor raiz:");
                scanf("%d", &op);
                printf("%d", op);
                Raiz = CriaArvore(Raiz, op);
                break;
            }
            case 3:
            {
                ResVazia(Raiz);
                break;
            }
            case 4:
            {
                printf("\nDigite o termo que deseja inserir :");
                scanf("%d",&op);
                Insere_Dados(&Raiz,op);
                break;
            }
            case 5:
            {
                printf("\nDigite o termo que deseja pesquisar :");
                scanf("%d",&op);
                Pesquisa(Raiz, op,Raiz->tamanho);
                break;
            }
            case 6:
            {
                printf("\nDigite o termo que deseja pesquisar :");
                scanf("%d",&op);
                Consulta_ORDEM(Raiz, op, Raiz->tamanho);
                break;
            }
            case 7:
            {
                printf("\nDigite o termo que deseja pesquisar :");
                scanf("%d",&op);
                Consulta_PREORDEM(Raiz, op, Raiz->tamanho);
                break;
            }
            case 8:
            {
                printf("\nDigite o termo que deseja pesquisar :");
                scanf("%d",&op);
                ResPOSORDEM(Raiz, op, Raiz->tamanho);
                break;
            }
            case 9:{
                printf("\nDigite o termo que deseja deletar :");
                scanf("%d",&op);
                Raiz = Retira(Raiz, op);
                break;
            }
            case 10:{
                
                Raiz = Esvaziar(Raiz);
                break;
                
            }
            case 0:
            {
                a = 0;
                break;
            }
            default:
            {
                printf("\nVALOR INVÁLIDO");
                break;
            }
        }
    }
    return  0;
}



