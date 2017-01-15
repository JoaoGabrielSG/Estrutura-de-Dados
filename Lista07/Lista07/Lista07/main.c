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
    
    //Menu correto:
    
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
    
    
//    printf("\nDIGITE A OPÇÃO QUE DESEJA:");
//    printf("\n[- 1 -] GERAR LISTA RANDÔMICA ");
//    printf("\n[- 2 -] IMPRIMIR A LISTA ");
//    printf("\n[- 3 -] IMPRIMIR EM PRE-ORDEM,ORDEM,POS-ORDEM ");
//    printf("\n[- 4 -] PESQUISAR OCORRENCIA DE TERMOS ");
//    printf("\n[- 5 -] CONSULTAR EM PRE-ORDEM,ORDEM,POS-ORDEM ");
//    printf("\n[- 6 -] CONSULTAR LISTA VAZIA ");
//    printf("\n[- 7 -] INSERIR TERMOS MANUALMENTE");
//    printf("\n[- 8 -] RETIRAR ELEMENTOS");
//    printf("\n[- 0 -] ENCERRAR PROGRAMA");
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
                
//                printf("\nGERAR LISTA RANDÔMICA ");
//                printf("\nDIGITE A QUANTIDADE DE TERMOS DA ÁRVORE PARA GERAR");
//                int oplim = 0;
//                scanf("%d",&op);
//                while(oplim < op)
//                {
//                    Insere_Dados(&Raiz,rand()%100);
//                    Raiz->tamanho++;
//                    oplim++;
//                }
//                system("PAUSE");
                break;
            }
            case 2:
            {
                system("cls");
                printf("\nIMPRIMIR A LISTA ");
                printf("\nMOSTRANDO ÁRVORE\n\n");
                Imprime_Arvore(Raiz);
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 3:
            {
                system("cls");
                printf("\nIMPRIMIR EM PRE-ORDEM,ORDEM,POS-ORDEM ");
                printf("\nMOSTRANDO ÁRVORE EM PRE-ORDEM\n\n");
                Imprimir_PREORDEM(Raiz);
                printf("\nMOSTRANDO ÁRVORE EM ORDEM\n\n ");
                Imprimir_PREORDEM(Raiz);
                printf("\nMOSTRANDO ÁRVORE EM POS-ORDEM\n\n ");
                Imprimir_POSORDEM(Raiz);
                printf("\n\n");
                break;
            }
            case 4:
            {
                system("cls");
                printf("\nPESQUISAR OCORRENCIA DE TERMOS ");
                printf("\nDIGITE O TERMOS QUE DESEJA PESQUISAR : ");
                scanf("%d",&op);
                //                if(Pesquisa(Raiz,op,Raiz->tamanho));
                
                
                //                if(Pesquisa(Raiz,op) != NULL)
                //                {
                //                    printf("Encontrado = %d",Pesquisa(Raiz,op)->valor);
                //                }
                //                else
                //                {
                //                    printf("não Encontrado");
                //                }
                
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 5:
            {
                system("cls");
                printf("\nCONSULTAR EM PRE-ORDEM,ORDEM,POS-ORDEM ");
                printf("\nDIGITE O TERMOS QUE DESEJA CONSULTAR : ");
                scanf("%d",&op);
                printf("\nMOSTRANDO CONSULTA EM PRE-ORDEM:");
                Consulta_PREORDEM(Raiz,op,Raiz->tamanho);
                printf("\nMOSTRANDO CONSULTA EM ORDEM:  ");
                Consulta_ORDEM(Raiz,op,Raiz->tamanho);
                printf("\nMOSTRANDO CONSULTA EM POS-ORDEM : ");
                Consulta_POSORDEM(Raiz,op,Raiz->tamanho,Raiz->tamanho);
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 6:
            {
                system("cls");
                printf("\nCONSULTAR LISTA VAZIA :\n\n ");
                ResVazia(Raiz);
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 7:
            {
                system("cls");
                printf("\nINSERIR TERMOS MANUALMENTE");
                printf("\nDIGITE O TERMOS QUE DESEJA INSERIR :");
                scanf("%d",&op);
                Insere_Dados(&Raiz,op);
                printf("\n\nITEM INSERIDO COM SUCESSO");
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 8:
            {
                system("cls");
                printf("\nRETIRAR ELEMENTOS");
                printf("\nDIGITE O TERMOS QUE DESEJA RETIRAR :");
                scanf("%d",&op);
                if(Pesquisa(Raiz,op,Raiz->tamanho))
                {
                    Raiz = Retira(Raiz,op);
                }
                else
                {
                    printf("\nValor Não Encontrado\n");
                }
                printf("\n\n");
                system("PAUSE");
                break;
            }
            case 0:
            {
                op = 0;
                system("cls");
                printf("\nENCERRANDO PROGRAMA EM 3:");
                Raiz = Esvaziar(Raiz);
                while(op <= 3)
                {
                    system("cls");
                    printf("\nENCERRANDO PROGRAMA EM %d:",3 - op);
                    op++;
                }
                system("cls");
                a = 0;
                break;
            }
            default:
            {
                system("cls");
                printf("\nVALOR INVÁLIDO");
                break;
            }
        }
    }
    return  0;
}



