#include <stdio.h>

int main(){
	float vetor[10] = {10.5, 20.0, 3.14, 7.5, 8.2, 9.0, 1.5, 4.4, 6.7, 12.3};
	float soma;
	int i;
	
	for(i=0; i<10; i++){
		soma += vetor[i];
	}
	
	printf("%f", soma);
	
	return 0;
}
