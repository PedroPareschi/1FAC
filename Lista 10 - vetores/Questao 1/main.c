//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 10

//Protótipo das funções
int contarOcorrencias(int* vetor, int numero);
void lerVetor(int* vetor);

//Programa main
void main(){

	//Declaração de variáveis
	int A[TAM], x;

	//Corpo do programa

	//Solicitação de variáveis a partir de uma funcao
	lerVetor(A);

	//Solcitando o valor de x
	printf("\nDigite o valor que deseja contar na funcao: ");
	scanf("%d", &x);

	//chamando função e e imprimindo resultado
	printf("\nNumero de ocorrencias de %d = %d\n", x, contarOcorrencias(A, x));

}

//funcao para ler vetores
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da função
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

int contarOcorrencias(int* vetor, int numero){
    //Declaracao de variaveis
    int i, cont = 0;
    for(i = 0; i <  TAM; i++){
        if(vetor[i] == numero){
            cont++;
        }
    }
    return cont;
}

