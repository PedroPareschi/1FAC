/*QUESTÃO 06:
Fazer um algoritmo que determine a ordem de
uma data (dia e mês) no ano.
Exemplos:
01/01 - 1º dia do ano
03/02 - 34º dia do ano*/

//Incluindo bibliotecas
#include  <stdio.h>

//Programa
void main ()
{
	//Declaração de variáveis
	int d,m,i, diasTotais;
	//Corpo do programa
	
	//Solicitando dia e mês
	printf("Inserir dia: ");
	scanf("%d",&d);
	printf("Inserir mes: ");
	scanf("%d",&m);
	
	//Calculando os dias do mês
	if (m>1)
	{
		i = 31;
		if (m>2)
		{
			i = i+28;
			if(m>3)
			{
				i = i+31;
				if(m>4)
				{
					i = i+30;
					if(m>5)
					{
						i = i+31;
						if(m>6)
						{
							i = i+30;
							if(m>7)
							{
								i = i+31;
								if(m>8)
								{
									i = i+31;
									if(m>9)
									{
										i = i+30;
										if(m>10)
										{
											i = i+31;
											if(m>11)
											{
												i = i+30;
												diasTotais = d + i;
											}
										}
										else
										{
											diasTotais = d + i;	
										}
									}
									else
									{
										diasTotais = d + i;	
									}
								}
								else
								{
									diasTotais = d + i;	
								}
							}
							else
							{
								diasTotais = d + i;	
							}
						}
						else
						{
							diasTotais = d + i;	
						}
					}
					else
					{
						diasTotais = d + i;	
					}
				}
				else
				{
					diasTotais = d + i;	
				}
			}
			else
			{
				diasTotais = d + i;	
			}
		}
		else
		{
			diasTotais = d + i;	
		}
	}
	else
	{
		diasTotais = d;	
	}
	printf("Ja se passaram %d dias no ano", diasTotais);	
}
