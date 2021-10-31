/*QUESTÃO 06: Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.*/

//inclusão de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declaração de variáveis
	int i;
	float a, b, c;
	
	//Corpo do programa
	
	//Solicitando código e valores
	printf ("Digite o codigo i: ");
	scanf("%d", &i);
	printf ("Insira tres valores: ");
	scanf ("%f %f %f", &a, &b, &c);
	
	//Aplicando o código
	if(i==2)
	{
		if(a>b)
		{
			if(b>c)
			{
				printf("%f, %f, %f", a, b, c);
			}
			else
			{
				if(c>a)
				{
					printf("%f, %f, %f", c, a, b);
				}
				else
				{
					printf("%f, %f, %f", a, c, b);
				}
			}
		}
		else
		{
			if(a>c)
			{
				printf("%f, %f, %f", b,a,c);	
			}
			else
			{
				if(c>b)
				{
					printf("%f, %f, %f", c, b, a);
				}
				else
				{
					printf("%f, %f, %f", b, c, a);
				}
			}
		}
	}
	else
	{
		if(i==1)
		{
			if(a>b)
			{
				if(b>c)
				{
					printf("%f, %f, %f", c, b, a);
				}
				else
				{
					if(c>a)
					{
						printf("%f, %f, %f", b, a, c);
					}
					else
					{
						printf("%f, %f, %f", b, c, a);
					}
				}
			}
			else
			{
				if(a>c)
				{
					printf("%f, %f, %f", c, a, b);	
				}
				else
				{
					if(c>b)
					{
						printf("%f, %f, %f", a, b, c);
					}
					else
					{
						printf("%f, %f, %f", a, c, b);
					}
				}
			}	
		}
		else
		{
			if(a>b)
			{
				if(a>c)
				{
					printf("%f, %f, %f", b, a, c);
				}
				else
				{
					printf("%f, %f, %f", a, c, b);
				}
			}
			else
			{
				if(b>c)
				{
					printf("%f, %f, %f", a, b, c);	
				}
				else
				{
					printf("%f, %f, %f", a, c, b);
				}
			}
		}
	}
}
