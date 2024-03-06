//referência: https://youtu.be/T2gTc5u-i1o
#include <stdio.h>
#include <stdlib.h>
void esvaziarVaso (int flores){
	if(flores > 0){  // o número de flores > 0, quer dizer que não está vazio.
		//remove uma flor (1° passo.)
		esvaziarVaso(flores - 1); //2° passo: supondo que int flores havia 3 flores, agora há 2.
		//ação que se repete até o vaso estar vazio.
	}
}

int main(){
	/*Vamos então generalizar a ideia:
	Como esvaziar um vaso contendo N flores? */
}
