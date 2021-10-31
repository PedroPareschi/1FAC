/*QUESTÃO 08:
Faça um algoritmo para calcular a conta final de
um hóspede de um hotel, considerando que:
a) Devem ser obtidos o tipo do apartamento 
utilizado (A, B, C ou D), o número de diárias 
utilizadas pelo hóspede e o valor do consumo interno do hóspede;
b) O valor da diária é determinado pela
seguinte tabela:
Tipo de Apartamento 	Valor da diária
A  						R$ 350,00
B 						R$ 275,00
C 						R$ 200,00
D 						R$ 150,00
c) O valor da taxa de serviço equivale a
10% da conta.
A conta a ser apresentada ao cliente deve
conter: O tipo do apartamento, o valor total das diárias, o
valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declaração de variáveis
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
	//Calculando a taxa de serviço
	taxaServ = 0.1 * subtotal;
	//Calculando total geral
	totalGeral = subtotal + taxaServ;
	
	//Retornando valores
	printf("\n Nota do hospede \nTipo de apartamento: %c \nTotal das diarias: R$ %.2f \nValor de consumo interno: R$ %.2f \nSubtotal: R$ %.2f \nValor da taxa de Servico: R$ %.2f \nTotal geral: R$ %.2f", tipoAp, totalDiarias, consInt, subtotal, taxaServ, totalGeral);
}

