//referência: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
int main(){
	/* Um exemplo clássico de função
	recursiva é o cálculo do fatorial
	de um número. */
	
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
	caso esteja vazio, não há mais o que fazer. */
	
	N! = N * (N-1)!;
	
}
