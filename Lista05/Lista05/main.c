//
//  main.c
//  Lista05
//
//  Created by joão gabriel on 11/12/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>
#include "Fila.h"

int main(int argc, const char * argv[]) {
    
    struct lista lista;
    
    iniciaFila(&lista);
    inserir_celula(&lista, 3);
    inserir_celula(&lista, 4);
    imprimir_lista(&lista);
    
    return 0;
}
