/*QUEST�O 08:
Fa�a um algoritmo para calcular a conta final de
um h�spede de um hotel, considerando que:
a) Devem ser obtidos o tipo do apartamento 
utilizado (A, B, C ou D), o n�mero de di�rias 
utilizadas pelo h�spede e o valor do consumo interno do h�spede;
b) O valor da di�ria � determinado pela
seguinte tabela:
Tipo de Apartamento 	Valor da di�ria
A  						R$ 350,00
B 						R$ 275,00
C 						R$ 200,00
D 						R$ 150,00
c) O valor da taxa de servi�o equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: O tipo do apartamento, o valor total das di�rias, o
valor do consumo interno, o subtotal, o
valor da taxa de servi�o e o total geral.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declara��o de vari�veis
	char tipoAp;
	int numDiarias, valorDiaria;
	float consInt, totalDiarias, subtotal, taxaServ, totalGeral;
	
	//Corpo do programa
	
	//Solicitando dados
	printf ("Digite o tipo de apartamento: ");
	scanf("%c", &tipoAp);
	printf("Digite o numero de diarias: ");
	scanf("%d", &numDiarias);
	printf("Digite o valor do consumo interno: ");
	scanf("%f", &consInt);
	
	//Determinando o valor da diaria
	if(tipoAp == 'A')
	{
		valorDiaria = 350;
	}
	else
	{
		if(tipoAp == 'B')
		{
			valorDiaria = 275;
		}
		else
		{
			if(tipoAp == 'C')
			{
				valorDiaria = 200;
			}
			else
			{
				valorDiaria = 150;
			}
		}
	}
	//Calculando o total gasto com diarias
	totalDiarias = valorDiaria * numDiarias;
	//Calculando o subtotal
	subtotal = totalDiarias + consInt;
	//Calculando a taxa de servi�o
	taxaServ = 0.1 * subtotal;
	//Calculando total geral
	totalGeral = subtotal + taxaServ;
	
	//Retornando valores
	printf("\n Nota do hospede \nTipo de apartamento: %c \nTotal das diarias: R$ %.2f \nValor de consumo interno: R$ %.2f \nSubtotal: R$ %.2f \nValor da taxa de Servico: R$ %.2f \nTotal geral: R$ %.2f", tipoAp, totalDiarias, consInt, subtotal, taxaServ, totalGeral);
}

