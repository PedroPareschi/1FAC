/*QUEST�O 06:
Fazer um algoritmo que determine a ordem de
uma data (dia e m�s) no ano.
Exemplos:
01/01 - 1� dia do ano
03/02 - 34� dia do ano*/

//Incluindo bibliotecas
#include  <stdio.h>

//Programa
void main ()
{
	//Declara��o de vari�veis
	int d,m,i, diasTotais;
	//Corpo do programa
	
	//Solicitando dia e m�s
	printf("Inserir dia: ");
	scanf("%d",&d);
	printf("Inserir mes: ");
	scanf("%d",&m);
	
	//Calculando os dias do m�s
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
