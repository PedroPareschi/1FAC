//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 10

//Prot�tipo das fun��es
void lerVetor(int* vetor);
void imprimirVetor(int* vetor);
void substituirNumeros(int* vetor, int A, int B);

//Programa main
void main(){

	//Declara��o de vari�veis
    int vetor[TAM], A, B;

	//Corpo do programa

	//Solicita��o de vari�veis
	printf("Valor de A = ");
	scanf("%d", &A);
    printf("Valor de B = ");
    scanf("%d", &B);
    lerVetor(vetor);

    //chamando funcao e imprimindo resultado
    substituirNumeros(vetor, A, B);
    imprimirVetor(vetor);
}

//Fun��o para ler vetor
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da fun��o
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}


//Fun��o para imprimir vetor
void imprimirVetor(int* vetor){
    int i;//declara��o de variaveis
    for(i = 0; i < TAM; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

void substituirNumeros(int* vetor, int A, int B){
    //Declara��o de vari�veis
    int i;
    //corpo da funcao
    for(i = 0; i < TAM; i++){
        if(vetor[i] == A){
            vetor[i] = B;//substituindo
        }
    }
}
