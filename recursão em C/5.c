//referência: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
//Traduzindo
	0! = 1;
	N! = N * (N-1)!;
//para C
int fatorial (int N){
	if (N == 0)
		return 1;
	else
		return N * fatorial (N-1);
}

int main(){
	/* ASSISTIR AULA 52 - SOBRE O FUNCIONAMENTO NA PRÁTICA.
	 - https://youtu.be/FH5lCr-RVWE
	 */
}

