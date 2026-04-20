#include <stdio.h>
int main(){
	int i;
	int vetor[5];
	
	for(i=0;i<5; i++){
		scanf("%d", &vetor[i]);
	}	
		
	for(i=4; i> -1; i--){
		printf("%d\n", vetor[i]);
	}
	
	
	
	return 0;
}
