/*QUEST�O 03: As vendas parceladas se
tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar
conquistar novos clientes. Fa�a um algoritmo
que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para
pagamento � vista;
b) O valor da presta��o para parcelamento
sem juros, em 5x;
c) O valor da presta��o para parcelamento
com juros, em 10x, com 20% de acr�scimo
no valor do produto.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declara��o de vari�veis
	float preco, valoraVista, valor5x, valor10x;
	//Corpo do programa
	
	//Solicitando pre�o do produto
	printf("Digite o preco do produto (em R$): ");
	scanf("%f", &preco);
	
	//Calculando os valores
	valoraVista = 0.9 * preco;
	valor5x = preco/5;
	valor10x = (1.2/10)*preco;
	
	//Retornando os valores
	printf("Valor a vista: R$ %.2f \nValor parcelado sem juros: 5 x R$ %.2f \nValor parcelado com juros: 10 x R$ %.2f", valoraVista, valor5x, valor10x);
}
