//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 3

//Protótipo das funções
void lerVetor(float* vetor);
void imprimirVetor(float* vetor);
void inverterDuplasElementos(float* vetor);

//Programa main
void main(){

	//Declaração de variáveis
    float vetor[TAM];

	//Corpo do programa

	//Solicitação de variáveis
    lerVetor(vetor);

    //Chamando função
    inverterDuplasElementos(vetor);

    //Imprimindo resultado
    imprimirVetor(vetor);

}

//funcao para ler vetores
void lerVetor(float* vetor){
    //declaracao de variaveis
    int i;
    //corpo da função
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void imprimirVetor(float* vetor){
    int i;//declaração de variaveis
    for(i = 0; i < TAM; i++){
        printf("[%d] = %f\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

//Função para inverter duplas de elementos
void inverterDuplasElementos(float* vetor){
    //declaração de variaveis
    int i, j;
    float aux;
    //corpo da função
    for(i = 1; i < TAM; i+=2){//indo de dois em dois com i
        j = i - 1;//j é anterior a i
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;//trocando o valor de i j usando um auxiliar
    }
}
