#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int vetor[6];
    int aux;
    int i, j;
    srand(time(NULL));

    for(i=0; i<6; i++){
        vetor[i] = rand()%100;
    }

    for(i=1; i<6; i++){
        for(j = i; j>0; j--){
            if(vetor[j-1] > vetor[j]){
                aux = vetor[j-1];
                vetor[j-1] = vetor[j];
                vetor[j] = aux;
            }
        }

    }

    for(i=0; i<6; i++){
        printf("%d\n", vetor[i]);
    }


    return 0;
}