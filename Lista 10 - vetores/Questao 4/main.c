//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 50

//Prot�tipo das fun��es
void retornarProgressao(int* vetor);
void imprimirVetor(int* vetor);

//Programa main
void main(){

	//Declara��o de vari�veis
	int vetor[TAM];

	//Corpo do programa
    //Chamando a fun��o
    retornarProgressao(vetor);

    //imprimindo resultado
    imprimirVetor(vetor);

}

//Fun��o para gerar o vetor
void retornarProgressao(int* vetor){
    //declara��o de variaveis
    int i;
    //associando valor ao primeiro elemento
    vetor[0] = 1;
    //corpo da fun��o
    for(i = 1; i < 50; i++){
        vetor[i] = i + vetor[i-1];
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
