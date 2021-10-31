/* Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e
altura, utilizando as seguintes fórmulas:
para  homens: (72.7*h)-58
para mulheres: (62.1*h)-44.7 */

//Importando biblioteca
#include <stdio.h>

//Programa principal
void main()
{
	//Declaração de váriaveis
	char sexo;
	float h, pesoIdeal;
	
	//Corpo do programa
	//Solicitando peso e altura
	printf("Digite seu sexo (H para homem e M para mulher): ");
	scanf("%c", &sexo);
	printf("Digite sua altura: ");
	scanf("%f",&h);
	
	//Calculando o peso ideal
	if(sexo=='H')
	{
		pesoIdeal = (72.7*h)-58;
	}
	else
	{
		pesoIdeal = (62.1*h)-44.7;
	}
	
	//retornando o resultado
	printf("Peso ideal: %.1f",pesoIdeal);
}
