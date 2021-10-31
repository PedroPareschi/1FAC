/*QUESTÃO 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:

IMC = peso / altura^2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:
IMC em adultos 			Condição
IMC < 18,5 				Abaixo do peso
18,5 =< IMC < 25,0 		Peso ideal
25,0 =< IMC < 30,0 		Sobrepeso
30,0 =< IMC < 35,0 		Obesidade grau I
35,0 =< IMC < 40,0 		Obesidade grau II
IMC =< 40,0 			Obesidade grau III*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa
void main()
{
	//Declaração de variáveis
	float peso, altura, imc;
	
	//Corpo do programa
	
	//Solicitando dados
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	//Calculando IMC
	imc = peso / (altura*altura);
	
	//Verificando condição
	if(imc<18.5)
	{
		printf("Abaixo do peso");
	}
	else
	{
		if(imc<25)
		{
			printf("Peso ideal");
		}
		else
		{
			if(imc<30)
			{
				printf("Sobrepeso");
			}
			else
			{
				printf("Obesidade grau ");
				if (imc<35)
				{
					printf("I");
				}
				else
				{
					if(imc<40)
					{
						printf("II");
					}
					else
					{
						printf("III");
					}
				}
			}
		}
	}
}

