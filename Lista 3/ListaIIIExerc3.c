/*QUEST�O 03: Jo�ozinho investiu Q reais
em uma aplica��o com rendimento fixo de
R% ao m�s. Pede-se a implementa��o de
um programa que calcule o valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A
anos de investimento*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declara��o de vari�veis
	float Q, R;
	int A, i, j;
	
	//Corpo do programa
	
	//Solicitando vari�veis
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
