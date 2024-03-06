//referência: https://youtu.be/YEeYk9uEqEI
#include <stdio.h>
#include <stdlib.h>
int main(){
	/*Crie uma função recursiva que
	calcule o somatório de 1 a N */
	
	Soma(4) = 1 + 2 + 3  + 4;
	Soma(3) = 1 + 2 + 3;
	Soma(2) = 1 + 2;
	Soma(1) = 1;
	
	//Também podemos dizer:
	Soma(4) = 4 + Soma(3);
	Soma(3) = 3 + Soma(2);
	Soma(2) = 2 + Soma(1);
	Soma(1) = 1 + Soma(0);
}
