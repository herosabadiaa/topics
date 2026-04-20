#include <stdio.h>

int main(){
	int vetor[10];
    int pares[10], impares[10];
    int contadorIP = 0, contadorP = 0;
    int i;
	
	printf("Digite 10 numeros\n");
	for(i=0;i<10;i++){
		scanf("%d", &vetor[i]);
		if(vetor[i] % 2 == 0){
			pares[contadorP] = vetor[i];
			contadorP++;
		}else{
			impares[contadorIP] = vetor[i];
			contadorIP++;
		}
		
	}
	
	printf("\nVetor: ");
    for(i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
    printf("\nPares: ");
    for(i = 0; i < contadorP; i++) {
    	printf("%d ", pares[i]);
	}
    printf("\nImpares: ");
    for(i = 0; i < contadorIP; i++) {
    	printf("%d ", impares[i]);
	}
	
	return 0;
}
