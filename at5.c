#include <stdio.h>

int main() {
    int numeros[15];
    int maior, menor, soma = 0;
    int i;

    printf("Digite os numeros:");
    for(i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]); 
        soma += numeros[i];
    }

    maior = numeros[0];
    menor = numeros[0];
    for(i = 1; i < 15; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\nMedia: %d", soma / 15);

    return 0;
}
