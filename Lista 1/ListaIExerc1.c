/*O custo ao consumidor de um carro novo � a
soma do custo de f�brica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de f�brica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.*/

//Importando biblioteca
#include <stdio.h>

//Programa principal
void main()
{
	//Declara��o de vari�veis
	float custoFabrica, porcDistrib, porcImposto, custoFinal;
	//Corpo do programa
	
	//solicitando os pre�os
	printf("Digite o custo de fabrica: ");
	scanf("%f",&custoFabrica);
	printf("Digite a porcentagem do distribuidor: ");
	scanf("%f",&porcDistrib);
	printf("Digite a porcentagem de impostos: ");
	scanf("%f",&porcImposto);
	
	//aplicando as taxas
	custoFinal = custoFabrica + ((porcDistrib/100)*custoFabrica)+((porcImposto/100)*custoFabrica);
	printf("O custo do carro �: R$ %.2f", custoFinal);
}
