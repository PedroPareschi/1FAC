/*QUEST�O 01: Fa�a um programa que leia
um n�mero inteiro positivo N e exiba todos
os m�ltiplos de Y inferiores a N, onde N e Y
s�o fornecidos pelo usu�rio.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declara��o de vari�veis
	int Y, N, i;
	
	//Corpo do programa
	
	//Leitura das vari�veis
	printf("Escreva o valor de N (numero maximo): ");
	scanf("%d", &N);
	printf("Escreva o valor de Y (numero com multiplos inferiores a N): ");
	scanf("%d", &Y);
	
	//C�lculos
	for(i = 1;i<N;i++){
		if(i%Y==0){
			printf("%d ", i);
		}
	}
}

