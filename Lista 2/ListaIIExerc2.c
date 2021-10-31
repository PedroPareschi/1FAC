/*QUEST�O 02: Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
n�mero de um planeta. Ao final, com aux�lio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.
N�mero  Planeta 		Gravidade Relativa g
1 		Merc�rio 		0,37
2 		V�nus 			0,88
3 		Marte 			0,38
4 		J�piter 		2,64
5 		Saturno 		1,15
6 		Urano 			1,17
Para calcular o peso no planeta escolhido,
utilize a seguinte f�rmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta*/

//Incluir biblioteca
#include<stdio.h>

//Programa
void main ()
{
	//Declara��o de variaveis
	float peso, grav, pesoPlaneta;
	int num;
	//Corpo do programa
	
	//Solicitando variaveis
	printf("Digitar peso: ");
	scanf("%f", &peso);
	printf("Digitar numero do planta: ");
	scanf("%d", &num);
	
	//Associando a gravidade aos planetas
	if (num==1)
	{
		grav = 0.37;
	}
	else
	{
		if (num==2)
		{
			grav = 0.88;
		}
		else
		{
			if(num==3)
			{
				grav = 0.38;
			}
			else
			{
				if(num==4)
				{
					grav = 2.64;
				}
				else
				{
					if(num==5)
					{
						grav = 1.15;
					}
					else
					{
						if(num==6)
						{
							grav = 1.17;
						}
					}
				}
			}
		}
	}
	//Calculando o peso no planeta e retornando resultado
	pesoPlaneta = (peso/10)*grav;
	printf("Peso no planeta %d: %.1f", num, pesoPlaneta);
}
