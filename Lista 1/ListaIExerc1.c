/*O custo ao consumidor de um carro novo é a
soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao
custo de fábrica). Desenvolver um algoritmo
que calcule o custo ao consumidor de
determinado carro.*/

//Importando biblioteca
#include <stdio.h>

//Programa principal
void main()
{
	//Declaração de variáveis
	float custoFabrica, porcDistrib, porcImposto, custoFinal;
	//Corpo do programa
	
	//solicitando os preços
	printf("Digite o custo de fabrica: ");
	scanf("%f",&custoFabrica);
	printf("Digite a porcentagem do distribuidor: ");
	scanf("%f",&porcDistrib);
	printf("Digite a porcentagem de impostos: ");
	scanf("%f",&porcImposto);
	
	//aplicando as taxas
	custoFinal = custoFabrica + ((porcDistrib/100)*custoFabrica)+((porcImposto/100)*custoFabrica);
	printf("O custo do carro é: R$ %.2f", custoFinal);
}
