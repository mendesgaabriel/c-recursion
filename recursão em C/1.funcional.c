//referência: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
void imprime (int n){
	int i;
	for(i = 1; i<=n; i++){
		printf("Linha %d \n");
	}
}

int main(){
	imprime(5);
	printf("Fim do programa...\n");
}
