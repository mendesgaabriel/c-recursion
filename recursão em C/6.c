//refer�ncia: https://youtu.be/o3MPTEc3LD8

#include <stdio.h>
#include <stdlib.h>
int fatorial (int n){
	if(n == 0)//crit�rio de parada
		return 1;
	else //par�metro de chamada recursiva
		return n*fatorial(n-1);
}

int main(){
	/* Par�metro da chamada recursiva:
	devemos sempre mudar o valor do par�metro
	passado, de forma que a recurs�o chege a um t�rmino. */
}
