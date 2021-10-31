/*QUEST�O 07: Uma determinada empresa
fez uma pesquisa de mercado para saber
se as pessoas gostaram ou n�o de um novo
produto que foi lan�ado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: g�nero (M ou F) e resposta (G
[Gostou] ou N [N�o Gostou]). Sabendo-se
que foram entrevistadas X pessoas, fa�a
um programa que forne�a:
a) N�mero de pessoas que gostaram
do produto;
b) N�mero de pessoas que n�o
gostaram do produto;
c) Informa��o dizendo em que
g�nero o produto teve uma melhor
aceita��o.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){	
	//Declaraa��o de vari�veis
	int X, i, gostaram=0, naoGostaram=0, aprovHomem=0, aprovMulher=0;
	char genero, avaliacao;
	//Corpo do programa
	printf("Digite a quantidade de pessoas entrevistadas: ");
	scanf("%d", &X);
	//estrutura de repeti��o para cada entrevistado
	for(i=1;i<=X;i++){
		printf("Digite o genero do(a) entrevistado(a): ");
		scanf(" %c", &genero);
		printf("Digite se o(a) entrevistado(a) gostou do produto: ");
		scanf(" %c", &avaliacao);
		//contabilizando os dados
		if(avaliacao=='G'){
			gostaram++;
			if(genero=='M'){
				aprovHomem++;
			}
			else{
				aprovMulher++;
			}
		}
		else{
			naoGostaram++;
			}
		}
		//retornando resultados das questoes a e b
	printf("Numero de pessoas que gostaram do produto: %d\n", gostaram);
	printf("Numero de pessoas que nao gostaram do produto: %d\n", naoGostaram);
	//verificando a disparidade de votos entre homens e mulheres
	if(aprovHomem>aprovMulher){
		printf("O produto obteve maior aceitacao entre os homens");
	}
	else if(aprovMulher>aprovHomem){
		printf("O produto obteve maior aceitacao entre as mulheres");
	}
	else{
		printf("O produto obteve aceitacao igual perante aos generos");
	}
}
