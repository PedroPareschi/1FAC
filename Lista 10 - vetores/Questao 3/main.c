//Inclusão de bibliotecas
#include <stdio.h>

//Definição de variaveis
#define TAM 10
#define TRUE 1
#define FALSE 0

//Protótipo das funções
void lerVetor(float* vetor);
int ehCrescente(float* vetor);

//Programa main
void main(){

	//Declaração de variáveis
	float vetor[TAM];

	//Corpo do programa

	//Chamando funcoes
	lerVetor(vetor);
	ehCrescente(vetor);
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

//funcao para verificar se o vetor se encontra na ordem crescente
int ehCrescente(float* vetor){
    //Declaração de variaveis
    int i, j;
    //Corpo da função
    for(i = 0; i < (TAM-1); i++){//estrutura for que vai ate o penultimo fato do vetor
        j = i + 1;//j é sucessor de i
        if(vetor[j] < vetor[i]){//se o sucessor, em qualquer momento for inferior ao que o antecede
            printf("\nNao eh crescente\n");
            return FALSE;//retorna falso
        }
    }
    printf("\nEh crescente\n");
    return TRUE;//retorna verdadeiro
}











