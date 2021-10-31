/*QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declaraação de variáveis
	int i;
	//Corpo do programa
	
	//estrutura de repetição
	for(i=1;i<=50;i++){
		//conferindo se o número é par ou ímpar
		if(i%2==0){
			printf("%d ", -i);
		}
		else{
			printf("%d ", i);
		}
	}
}
