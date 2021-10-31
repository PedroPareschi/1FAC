/*QUEST�O 04: Fa�a um programa que leia
300 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declara��o de vari�veis
	int i, quantNeg=0, quantPos=0;
	float num, mediaPos=0, somaPos=0;
	
	//Corpo do programa
	
	//estrutura de repeti��o para solicitar
	for(i=1;i<=300;i++){
		printf("Digite um numero real: ");
		scanf("%f", &num);
		//conferindo se o n�mero � positivo ou negativo
		if(num<0){
			quantNeg++;
		}
		else if(num>0){
			//calculando a m�dia
			quantPos++;
			somaPos = somaPos + num;
			mediaPos = somaPos/quantPos;
		}
	}
	printf("Quantidade de negativos: %d\nMedia dos valores positivos: %f", quantNeg, mediaPos);
}
