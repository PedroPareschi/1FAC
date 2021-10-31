//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 10

//Prot�tipo das fun��es
int posicaoNumero(float *vetor, float numero);
void lerVetor(float* vetor);
void imprimirVetor(float* vetor);

//Programa main
void main(){

	//Declara��o de vari�veis
	float vetor[TAM], numero;


	//Corpo do programa

	//Solicita��o de vari�veis
    printf("Digite um numero: ");
    scanf("%f", &numero);
    lerVetor(vetor);

    printf("%d", posicaoNumero(vetor, numero));
}

//Fun��o para ler vetor
void lerVetor(float* vetor){
    //declaracao de variaveis
    int i;
    //corpo da fun��o
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

//Fun��o para achar posi��o do numero
int posicaoNumero(float *vetor, float numero){
    //declaracao de vairaveis
    int i;
    while((vetor[i] < numero) && (i < tamanho)){//enquanto o elemento for menor que o numero ate o final do vetor
        i++;
    }
    return i+1;
}
