//refer�ncia: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
void esvaziarVaso (int flores){
	if(flores > 0){  // o n�mero de flores > 0, quer dizer que n�o est� vazio.
		//remove uma flor (1� passo.)
		esvaziarVaso(flores - 1); //2� passo: supondo que int flores havia 3 flores, agora h� 2.
		//a��o que se repete at� o vaso estar vazio.
	}
}

int main(){
	/*Vamos ent�o generalizar a ideia:
	Como esvaziar um vaso contendo N flores? */
}
