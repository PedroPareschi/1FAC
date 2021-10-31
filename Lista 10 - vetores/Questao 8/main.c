//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 10

//Protótipo das funções
int posicaoNumero(float *vetor, float numero);
void lerVetor(float* vetor);
void imprimirVetor(float* vetor);

//Programa main
void main(){

	//Declaração de variáveis
	float vetor[TAM], numero;


	//Corpo do programa

	//Solicitação de variáveis
    printf("Digite um numero: ");
    scanf("%f", &numero);
    lerVetor(vetor);

    printf("%d", posicaoNumero(vetor, numero));
}

//Função para ler vetor
void lerVetor(float* vetor){
    //declaracao de variaveis
    int i;
    //corpo da função
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

//Função para achar posição do numero
int posicaoNumero(float *vetor, float numero){
    //declaracao de vairaveis
    int i;
    while((vetor[i] < numero) && (i < tamanho)){//enquanto o elemento for menor que o numero ate o final do vetor
        i++;
    }
    return i+1;
}
