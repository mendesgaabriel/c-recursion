//referência: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
int fatorial (int n){
	if (n == 0)
		return 1;
	else
		return n*fatorial (n-1);
		
		/* "Qualquer função recurisva funciona assim:
		Empilhando as chamadas da função, e depois desempilhando os resultados.
		Até chegar no resultado final." - https://youtu.be/FH5lCr-RVWE - Aula 52 */
}

int main(){
	/*Uma função pode, inclusive, chamar a si própria.
	A isso chamamos de recursividade.*/
	
	int x = fatorial(5);
	
	printf("%d\n", x);
}
