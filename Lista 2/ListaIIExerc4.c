/*QUEST�O 04: Desenvolva um algoritmo que calcule o consumo de combust�vel de um
autom�vel em determinada viagem. Para isso, devem ser obtidos: 

i) o percurso (em quil�metros) da viagem; 
ii) o n�mero de quil�metros que o carro percorre com um litro de combust�vel (km/l); e 
iii) o pre�o do litro do combust�vel.

Ao final, o algoritmo deve determinar:
- A quantidade de combust�vel, em litros, consumida durante a viagem;
- O custo total de combust�vel.*/

//Importa��o de bibliotecas
#include <stdio.h>

//Implementa��o
void main ()
{
	//declara��o de vari�veis
	float dist, consumo, preco, quant, custo;
	
	//corpo do programa
	
	//Leitura dos dados
	printf ("Entre com a distancia da viagem (em km): ");
	scanf ("%f", &dist);
	
	printf ("Entre com o consumo do carro (em km/l): ");
	scanf ("%f", &consumo);
	
	printf ("Entre com o preco do litro de combustivel: ");
	scanf ("%f", &preco);
	
	//calculando a quantidade de combust�vel necess�ria na viagem
	quant = dist/consumo;
	
	//calculando o custo com conbust�vel
	custo = quant*preco;
	
	//Exibindo os resultados
	printf ("\n\nForam gastos %.1f l de combustivel, totalizando um custo de R$ %.2f", quant, custo);	
}
