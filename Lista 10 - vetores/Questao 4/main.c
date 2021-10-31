//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 50

//Protótipo das funções
void retornarProgressao(int* vetor);
void imprimirVetor(int* vetor);

//Programa main
void main(){

	//Declaração de variáveis
	int vetor[TAM];

	//Corpo do programa
    //Chamando a função
    retornarProgressao(vetor);

    //imprimindo resultado
    imprimirVetor(vetor);

}

//Função para gerar o vetor
void retornarProgressao(int* vetor){
    //declaração de variaveis
    int i;
    //associando valor ao primeiro elemento
    vetor[0] = 1;
    //corpo da função
    for(i = 1; i < 50; i++){
        vetor[i] = i + vetor[i-1];
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
