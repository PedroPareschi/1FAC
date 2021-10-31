/*QUESTÃO 05:
Escrever um algoritmo que, dada uma quantia
em reais, calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declaração de variáveis
	
	int quantia, notas100, r, notas50, notas20, notas10, notas5, notas2, moeda1;
	
	//Corpo do programa
	
	//Solicitando quantia
	printf("Digite a quantia desajada para saque (inteira): ");
	scanf("%d",&quantia);
	
	//Calculando notas
	notas100 = quantia/100;
	r = quantia%100;
	notas50 = r/50;
	r = quantia%50;
	notas20 = r/20;
	r = r%20;
	notas10 = r/10;
	r = r%10;
	notas5 = r/5;
	r = r%5;
	notas2 = r/2;
	r = r%2;
	moeda1 = r;
	
	//Retornando o resultado
	printf("Imprimindo: \n %d notas de R$100,00 \n %d notas de R$50,00 \n %d notas de R$20,00 \n %d notas de R$10,00 \n %d notas de R$5,00 \n %d notas de R$2,00 \n %d moeda de R$1,00", notas100, notas50, notas20, notas10, notas5, notas2, moeda1);
	
}
