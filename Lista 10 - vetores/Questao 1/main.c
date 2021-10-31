//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 10

//Prot�tipo das fun��es
int contarOcorrencias(int* vetor, int numero);
void lerVetor(int* vetor);

//Programa main
void main(){

	//Declara��o de vari�veis
	int A[TAM], x;

	//Corpo do programa

	//Solicita��o de vari�veis a partir de uma funcao
	lerVetor(A);

	//Solcitando o valor de x
	printf("\nDigite o valor que deseja contar na funcao: ");
	scanf("%d", &x);

	//chamando fun��o e e imprimindo resultado
	printf("\nNumero de ocorrencias de %d = %d\n", x, contarOcorrencias(A, x));

}

//funcao para ler vetores
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da fun��o
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

