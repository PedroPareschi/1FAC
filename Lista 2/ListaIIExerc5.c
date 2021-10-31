/*QUESTÃO 05: O cardápio de uma lanchonete é o seguinte:

Especificação 		Código 		Preço
Cachorro quente 	100 		3,50
Bauru simples 		101 		4,50
Bauru com ovo 		102 		5,20
Hamburger 			103 		3,00
Cheeseburger 		104 		4,00
Refrigerante 		105 		2,50

Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o valor
a ser pago.
Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado a
um item.*/

//Importação de bibliotecas
#include <stdio.h>

//Implementação
void main ()
{
	//declaração de variáveis
	int codigo, quant;
	float valor, custo;

	//corpo do programa
	
	//Exibindo as opções
	printf ("Especificação 		Código 		Preço\n");
	printf ("Cachorro quente 	100 		3,50\n");
	printf ("Bauru simples 		101 		4,50\n");
	printf ("Bauru com ovo 		102 		5,20\n");
	printf ("Hamburger 		103 		3,00\n");
	printf ("Cheeseburger 		104 		4,00\n");
	printf ("Refrigerante 		105 		2,50\n\n");

	
	//Leitura dos dados
	printf ("Entre com o codigo: ");
	scanf ("%d", &codigo);
	
	printf ("Entre com a quantidade: ");
	scanf ("%d", &quant);
	
	//verificando qual o produto escolhido	
	if (codigo == 100)
	{
		valor = 3.50;
	}
	else
	{
		if (codigo == 101)
		{
			valor = 4.50;
		}
		else
		{
			if (codigo == 102)
			{
				valor = 5.20;
			}
			else
			{
				if (codigo == 103)
				{
					valor = 3.00;
				}
				else
				{
					if (codigo == 104)
					{
						valor = 4.00;
					}
					else
					{
						valor = 2.50;
					}
				}
			}
		}
	}
	
	//calculando o valor da compra
	custo = valor * quant;
	
	//Exibindo o resultado
	printf ("\nValor da compra: R$ %.2f", custo);
}
