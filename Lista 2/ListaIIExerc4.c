/*QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso, devem ser obtidos: 

i) o percurso (em quilômetros) da viagem; 
ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); e 
iii) o preço do litro do combustível.

Ao final, o algoritmo deve determinar:
- A quantidade de combustível, em litros, consumida durante a viagem;
- O custo total de combustível.*/

//Importação de bibliotecas
#include <stdio.h>

//Implementação
void main ()
{
	//declaração de variáveis
	float dist, consumo, preco, quant, custo;
	
	//corpo do programa
	
	//Leitura dos dados
	printf ("Entre com a distancia da viagem (em km): ");
	scanf ("%f", &dist);
	
	printf ("Entre com o consumo do carro (em km/l): ");
	scanf ("%f", &consumo);
	
	printf ("Entre com o preco do litro de combustivel: ");
	scanf ("%f", &preco);
	
	//calculando a quantidade de combustível necessária na viagem
	quant = dist/consumo;
	
	//calculando o custo com conbustível
	custo = quant*preco;
	
	//Exibindo os resultados
	printf ("\n\nForam gastos %.1f l de combustivel, totalizando um custo de R$ %.2f", quant, custo);	
}
