/*QUEST�O 04:
Um banco conceder� um cr�dito especial aos
seus clientes, vari�vel com o saldo m�dio no
�ltimo ano. Fa�a um algoritmo que calcule o
valor do cr�dito de acordo com a tabela abaixo.
Saldo M�dio                 Percentual
Inferior a R$ 1000,00       nenhum cr�dito
De R$ 1000,00 a R$ 1499,99  20% do saldo m�dio
De R$ 1500,00 a R$ 2499,99  30% do saldo m�dio
R$ 2500,00 ou mais          40% do saldo m�dio*/

//inclus�o de biblioteca
#include <stdio.h>

//Programa
void main ()
{
	//Declara��o de vari�veis
	float saldo, percentual, credito;
	
	//Programa principal
	
	//Solicitando saldo
	printf("Digite seu saldo: ");
	scanf("%f", &saldo);
	
	//Impondo as condi��es
	if(saldo<1000)
	{
		percentual = 0;
	}
	else
	{
		if(saldo<1500)
		{
			percentual = 0.2;
		}
		else
		{
			if(saldo<2500)
			{
				percentual = 0.3;
			}
			else
			{
				percentual = 0.4;
			}
		}
	}
	//Calulando o credito
	credito = percentual*saldo;
	printf("Taxa de credito: R$ %.2f", credito);
}
