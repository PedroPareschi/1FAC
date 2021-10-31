/*QUESTÃO 07: Uma determinada empresa
fez uma pesquisa de mercado para saber
se as pessoas gostaram ou não de um novo
produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes
dados: gênero (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se
que foram entrevistadas X pessoas, faça
um programa que forneça:
a) Número de pessoas que gostaram
do produto;
b) Número de pessoas que não
gostaram do produto;
c) Informação dizendo em que
gênero o produto teve uma melhor
aceitação.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){	
	//Declaraação de variáveis
	int X, i, gostaram=0, naoGostaram=0, aprovHomem=0, aprovMulher=0;
	char genero, avaliacao;
	//Corpo do programa
	printf("Digite a quantidade de pessoas entrevistadas: ");
	scanf("%d", &X);
	//estrutura de repetição para cada entrevistado
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
