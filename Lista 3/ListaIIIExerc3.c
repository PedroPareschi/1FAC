/*QUESTÃO 03: Joãozinho investiu Q reais
em uma aplicação com rendimento fixo de
R% ao mês. Pede-se a implementação de
um programa que calcule o valor (e exiba-o) disponível na conta de Joãozinho após A
anos de investimento*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declaração de variáveis
	float Q, R;
	int A, i, j;
	
	//Corpo do programa
	
	//Solicitando variáveis
	printf("Digite o investimento: ");
	scanf("%f",&Q);
	printf("Digite o rendimento ao mes: ");
	scanf("%f",&R);
	printf("Digite os anos de investimentos: ");
	scanf("%d", &A);
	
	//Calculando o rendimento total
	
	//Transformando anos em meses
	i = A*12;
	
	for(j=1;j<=i;j++){
		//Aplicando o rendimento na quantia
		Q = Q*(1+(R/100));
	}
	printf("O valor disponiver: %.2f", Q);
}
