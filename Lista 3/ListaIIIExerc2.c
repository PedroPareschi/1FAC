/*QUESTÃO 02: Faça um programa que exiba
todos os elementos da seguinte série,
assim como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){

	//Declaraação de variáveis
	int i, j, s=0;
	//Corpo do programa
	for(i=1, j=50; i<=50; i++, j--){
		printf("%d %d ", i, j);
		s = s + i + j;
		}
		printf("\n\n\nSoma: %d", s);
}
