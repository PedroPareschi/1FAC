/*QUEST�O 02: Fa�a um programa que exiba
todos os elementos da seguinte s�rie,
assim como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){

	//Declaraa��o de vari�veis
	int i, j, s=0;
	//Corpo do programa
	for(i=1, j=50; i<=50; i++, j--){
		printf("%d %d ", i, j);
		s = s + i + j;
		}
		printf("\n\n\nSoma: %d", s);
}
