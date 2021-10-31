/*QUESTÃO 01: Faça um programa que leia
um número inteiro positivo N e exiba todos
os múltiplos de Y inferiores a N, onde N e Y
são fornecidos pelo usuário.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declaração de variáveis
	int Y, N, i;
	
	//Corpo do programa
	
	//Leitura das variáveis
	printf("Escreva o valor de N (numero maximo): ");
	scanf("%d", &N);
	printf("Escreva o valor de Y (numero com multiplos inferiores a N): ");
	scanf("%d", &Y);
	
	//Cálculos
	for(i = 1;i<N;i++){
		if(i%Y==0){
			printf("%d ", i);
		}
	}
}

