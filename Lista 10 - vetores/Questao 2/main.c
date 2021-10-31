//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 3

//Prot�tipo das fun��es
void lerVetor(float* vetor);
void imprimirVetor(float* vetor);
void inverterDuplasElementos(float* vetor);

//Programa main
void main(){

	//Declara��o de vari�veis
    float vetor[TAM];

	//Corpo do programa

	//Solicita��o de vari�veis
    lerVetor(vetor);

    //Chamando fun��o
    inverterDuplasElementos(vetor);

    //Imprimindo resultado
    imprimirVetor(vetor);

}

//funcao para ler vetores
void lerVetor(float* vetor){
    //declaracao de variaveis
    int i;
    //corpo da fun��o
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void imprimirVetor(float* vetor){
    int i;//declara��o de variaveis
    for(i = 0; i < TAM; i++){
        printf("[%d] = %f\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

//Fun��o para inverter duplas de elementos
void inverterDuplasElementos(float* vetor){
    //declara��o de variaveis
    int i, j;
    float aux;
    //corpo da fun��o
    for(i = 1; i < TAM; i+=2){//indo de dois em dois com i
        j = i - 1;//j � anterior a i
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;//trocando o valor de i j usando um auxiliar
    }
}
