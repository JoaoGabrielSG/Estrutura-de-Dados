//
//  main.c
//  Lista03_03
//
//  Created by joão gabriel on 21/11/16.
//  Copyright © 2016 bepid. All rights reserved.
//

#include <stdio.h>

int maximo(int vetor[], int n){
    int x;
    
    if(n == 0){
        return vetor[0];
    }else{
        x = maximo(vetor, n-1);
        
        if (x < vetor[n - 1]) {
            return vetor[n - 1];
        }else{
            return x;
        }
    }
}

int minimo(int vetor[], int n){
    int x;
    
    if(n == 0){
        return vetor[0];
    }else{
        x = minimo(vetor, n-1);
        
        if (x > vetor[n - 1]) {
            return vetor[n - 1];
        }else{
            return x;
        }
    }
}

int maxmin(int vetor[], int n, int max_ou_min){
    
    if (max_ou_min == 1) {
        return maximo(vetor, n);
    }else{
        return minimo(vetor, n);
    }
}

int main(int argc, const char * argv[]) {
    
    int v[5] = {1,10,1021,300,1150};
    

    printf("Minimo: %d \n",minimo(v, 5));
    printf("Maximo: %d \n",maximo(v, 5));
    
    return 0;
}
