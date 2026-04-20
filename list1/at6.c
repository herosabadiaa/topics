#include <stdio.h>

int main(){
	int vetor[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
	}
	for(i=0; i<10; i++){
		printf("%d\n",
		 vetor[i]);
	}
	
	
	
	return 0;
}
