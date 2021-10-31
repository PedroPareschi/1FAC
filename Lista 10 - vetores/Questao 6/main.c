//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 10

//Protótipo das funções
void lerVetor(int* vetor);
void imprimirVetor(int* vetor);
void substituirNumeros(int* vetor, int A, int B);

//Programa main
void main(){

	//Declaração de variáveis
    int vetor[TAM], A, B;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Valor de A = ");
	scanf("%d", &A);
    printf("Valor de B = ");
    scanf("%d", &B);
    lerVetor(vetor);

    //chamando funcao e imprimindo resultado
    substituirNumeros(vetor, A, B);
    imprimirVetor(vetor);
}

//Função para ler vetor
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da função
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}


//Função para imprimir vetor
void imprimirVetor(int* vetor){
    int i;//declaração de variaveis
    for(i = 0; i < TAM; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

void substituirNumeros(int* vetor, int A, int B){
    //Declaração de variáveis
    int i;
    //corpo da funcao
    for(i = 0; i < TAM; i++){
        if(vetor[i] == A){
            vetor[i] = B;//substituindo
        }
    }
}
