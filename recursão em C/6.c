//referência: https://youtu.be/o3MPTEc3LD8

#include <stdio.h>
#include <stdlib.h>
int fatorial (int n){
	if(n == 0)//critério de parada
		return 1;
	else //parâmetro de chamada recursiva
		return n*fatorial(n-1);
}

int main(){
	/* Parâmetro da chamada recursiva:
	devemos sempre mudar o valor do parâmetro
	passado, de forma que a recursão chege a um término. */
}
