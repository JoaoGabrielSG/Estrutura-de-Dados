//
//  main.c
//  Lista02_05
//
//  Created by joão gabriel on 15/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>

struct questionario {
    
    char sexo;
    int estado_civil;
    int idade;
    int renda_anual;
};


int quatidade_entrevistado_por_sexo(struct questionario vetor[], int tamanho, char sexo){
    int quatidade = 0;
    
    for (int i =0; i <= tamanho; i++) {
        if (vetor[i].sexo == sexo) {
            quatidade++;
        }
    }
    return quatidade;
}


int quatidade_solteiras(struct questionario vetor[], int tamanho){
    int quatidade = 0;
    
    for (int i =0; i <= tamanho; i++) {
        if (vetor[i].sexo == 'F') {
            if (vetor[i].estado_civil == 0) {
                quatidade++;
            }
        }
    }
    return quatidade;
}


float homens_divorciados(struct questionario vetor[], int tamanho){
    float total_homem = 0;
    float homens_divorciados = 0;
    
    for (int i =0; i <= tamanho; i++) {
        if (vetor[i].sexo == 'M') {
            total_homem++;
            if (vetor[i].estado_civil == 3) {
                homens_divorciados++;;
            }
        }
    }
    return (homens_divorciados/total_homem)*100;
}


float renda_anual_media(struct questionario vetor[], int tamanho){
    float total_mulheres_casadas_20_40 = 0;
    float renda = 0;
    
    for (int i =0; i <= tamanho; i++) {
        if (vetor[i].sexo == 'F' && vetor[i].idade <= 40 && vetor[i].idade >= 20 && vetor[i].estado_civil == 1) {
            total_mulheres_casadas_20_40++;
            renda += vetor[i].renda_anual;
        }
    }
    return (renda/total_mulheres_casadas_20_40);
}

int main(int argc, const char * argv[]) {
    
    struct questionario vetor[35];
    int tamanho = 0;
    
    
    
    vetor[0].sexo = 'M';
    vetor[0].idade = 30;
    vetor[0].estado_civil = 1;
    vetor[0].renda_anual = 12000;
    tamanho++;
    
    vetor[1].sexo = 'F';
    vetor[1].idade = 36;
    vetor[1].estado_civil = 1;
    vetor[1].renda_anual = 6000;
    tamanho++;
    
    vetor[2].sexo = 'F';
    vetor[2].idade = 40;
    vetor[2].estado_civil = 1;
    vetor[2].renda_anual = 70000;
    tamanho++;
    
    
    printf("quatidade_entrevistado_por_sexo: %d \n", quatidade_entrevistado_por_sexo(vetor,tamanho, 'M'));
    printf("quatidade_entrevistado_por_sexo: %d \n", quatidade_entrevistado_por_sexo(vetor, tamanho, 'F'));
    printf("quatidade_solteiras: %d \n", quatidade_solteiras(vetor, tamanho));
    printf("homens_divorciados: %f \n", homens_divorciados(vetor, tamanho));
    printf("renda_anual_media: %f\n", renda_anual_media(vetor, tamanho));
    
    return 0;
}
