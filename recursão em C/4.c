//refer�ncia: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* Um exemplo cl�ssico de fun��o
	recursiva � o c�lculo do fatorial
	de um n�mero. */
	
	4! = 4 * 3 * 2 * 1;
	3! = 3 * 2 * 1;
	2! = 2 * 1;
	1! = 1;
	
	0! = 1;
	-----------------------------
	4! = 4 * 3!;
	3! = 3 * 2!;
	2! = 2 * 1!;
	1! = 1 * 0!;
	
	0! = 1; /*similar a analogia do vaso de flores.
	caso esteja vazio, n�o h� mais o que fazer. */
	
	N! = N * (N-1)!;
	
}
