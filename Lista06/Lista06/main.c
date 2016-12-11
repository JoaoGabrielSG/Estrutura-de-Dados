//
//  main.c
//  Lista06
//
//  Created by joão gabriel on 10/12/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculadora.h"

int main(int argc, const char * argv[]) {
    No*lista = NULL;
    char palavra[100] = "4*1-10+4*4";
    
    printf("Equacao: %s\n", palavra);
    lista = strEmpilhar(palavra);
    lista = resolvePilha(lista);
    boxListar(lista);
    
    printf("Digite a equação:\n");
    scanf("%s", palavra);
    printf("Equacao: %s\n", palavra);
    free(lista);
    lista = NULL;
    lista = strEmpilhar(palavra);
    lista = resolvePilha(lista);
    boxListar(lista);
    free(lista);
    lista = NULL;
    return 0;
}
