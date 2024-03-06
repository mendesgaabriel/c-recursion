//referência: https://youtu.be/o3MPTEc3LD8
#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
	if(n == 0 || n == 1)
		return;
	else
		return fibo(n-1) + fibo(n-2);
}

int main(){
	/* Algoritmos recursivos tendem a necessitar
	de mais tempo e/ou espaço do que algoritmos
	iterativos. Exemplo:
	sequência de Fibonacci
		0 + 1 = 1 + 1 = 2 + 1 = 3 + 2 = 5 + 3 = 8 + 5 = 13 + 8 = 21 + 13 = 34 + 21 = 55 + 34 = 89.... */
		// A soma dos dois anteriores, geram o próximo termo.
}
