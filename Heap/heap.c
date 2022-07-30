#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define PAI(i) ((i-1)/2)

void troca(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void sobeHeap( int v[], int pos){
    int corr = pos;
    while (corr > 0 && v[PAI(corr) < v[corr]]){
        troca(&v[corr], &v[PAI(corr)]);
        corr = PAI(corr);
    }
}

int insereHeap(int v[], int m, int x){
    v[m] = x;
    sobeHeap(v, m);
    return m+1;
}

bool verifica (int x){
    return (x != NULL);
}

void imprimeVetor(int v[]){
    int i = 0;

    while (verifica(v[i])){
            printf("%d\n",v[i]);
            i++;
    }
}

int main(){

    int v[10] = {6,3,5,2,1,4};

     imprimeVetor(v);
     insereHeap(v,6,7);
     printf("================\n");
     imprimeVetor(v);

    



    return 0;
}