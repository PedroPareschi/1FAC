/*QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declaração de variáveis
	int i, quantNeg=0, quantPos=0;
	float num, mediaPos=0, somaPos=0;
	
	//Corpo do programa
	
	//estrutura de repetição para solicitar
	for(i=1;i<=300;i++){
		printf("Digite um numero real: ");
		scanf("%f", &num);
		//conferindo se o número é positivo ou negativo
		if(num<0){
			quantNeg++;
		}
		else if(num>0){
			//calculando a média
			quantPos++;
			somaPos = somaPos + num;
			mediaPos = somaPos/quantPos;
		}
	}
	printf("Quantidade de negativos: %d\nMedia dos valores positivos: %f", quantNeg, mediaPos);
}
