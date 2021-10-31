/*QUESTÃO 03: As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declaração de variáveis
	float preco, valoraVista, valor5x, valor10x;
	//Corpo do programa
	
	//Solicitando preço do produto
	printf("Digite o preco do produto (em R$): ");
	scanf("%f", &preco);
	
	//Calculando os valores
	valoraVista = 0.9 * preco;
	valor5x = preco/5;
	valor10x = (1.2/10)*preco;
	
	//Retornando os valores
	printf("Valor a vista: R$ %.2f \nValor parcelado sem juros: 5 x R$ %.2f \nValor parcelado com juros: 10 x R$ %.2f", valoraVista, valor5x, valor10x);
}
