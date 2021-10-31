/*Elabore um algoritmo que, dada a idade de um
nadador, classifique-o em uma das seguintes
categorias:
Categoria       Faixa de idade
infantil A       0 - 4 anos
infantil B       5 - 7 anos
infantil C       8-10 anos
juvenil A        11-13 anos
juvenil B        14-17 anos
Adulto           18 anos ou mais*/

//Importando biblioteca
#include <stdio.h>

//Programa principal
void main()
{
	//Declaração de variáveis
	int idade;
	
	//Solicitando idade do nadador
	printf("Digite a idade do nadador: ");
	scanf("%d",&idade);
	
	//Conferindo idade
	if(idade<=10)
	{
		printf("Turma Infantil");
		if(idade<=4)
		{
			printf(" A");
		}
		else
		{
			if(idade<=7)
			{
				printf(" B");
			}
			else
			{
				printf(" C");
			}
		}
	}
	else
	{
		if(idade<=17)
		{
			printf("Turma Juvenil");
			if(idade<=13)
			{
				printf(" A");
				
			}
			else
			{
				printf(" B");
			}
		}	
		else
		{
			printf("Turma Adulto");
		}
	}
}
