#include <stdio.h>

int main(){
	int vetor1[5] = {1, 2, 3, 4, 6};
	int vetor2[5] = {1, 2, 3, 5, 6};
	int vetor3[5];	
	int i;
	
	for(i=0; i<5; i++){
		if(vetor1[i] == vetor2[i]){
		vetor3[i] = vetor1[i];
		}
	}

	return 0;
}
