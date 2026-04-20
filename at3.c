#include <stdio.h>

int main(){
	int vetor[8];
	int i, busca;
	
	for(i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
	}
	printf("\nDigite o numero para buscar: ");
    scanf("%d", &busca);
    
	for(i = 0; i < 8; i++) {
        if(vetor[i] == busca) {
            printf("O numero %d foi encontrado na posicao: %d\n", busca, i);
	    }
	}
	return 0;
}
