//refer�ncia: https://youtu.be/YEeYk9uEqEI
#include <stdio.h>
#include <stdlib.h>
int Soma(n){
	if(n == 0)
		return 0;
	else
		return n + Soma(n-1);
}

int main(){
	/*Crie uma fun��o recursiva que calcule
	o somat�rio de 1 a N */
	
	//Generalizando
	Soma(n) = n + Soma(n-1);
	
	//Caso base
	Soma(0) = 0;
}
