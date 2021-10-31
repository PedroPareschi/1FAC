//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 10

//Protótipo das funções
void lerVetor(float* vetor);
void imprimirVetor(float* vetor, int tamanho);
int removerElementos(float* vetor, float elemento, int* tamanho);

//Programa main
void main(){

	//Declaração de variáveis
	float vetor[TAM], elemento;
	int tamanho = TAM;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite o elemento que deseja remover: ");
	scanf("%f", &elemento);
	lerVetor(vetor);

	//chamando funcao
	printf("O elemento foi removido %d vezes\n", removerElementos(vetor, elemento, &tamanho));

	//imprimindo vetor
	imprimirVetor(vetor, tamanho);
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


//Função para imprimir vetor
void imprimirVetor(float* vetor, int tamanho){
    int i;//declaração de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %f\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

int removerElementos(float* vetor, float elemento, int *tamanho){
    //declaração de variaveis
    int i, j, contador;
    //estrutura for
    for(i = 0; i < *tamanho; i++){
        while(elemento == vetor[i]){
            for(j = i; j < *tamanho; j++){
                vetor[j] = vetor[j+1];

            }
            contador++;
        }
    }
    *tamanho = *tamanho - contador;
    return contador;
}

















