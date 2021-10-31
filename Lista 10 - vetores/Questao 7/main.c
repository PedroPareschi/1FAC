//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 10

//Prot�tipo das fun��es
void lerVetor(float* vetor);
void imprimirVetor(float* vetor, int tamanho);
int removerElementos(float* vetor, float elemento, int* tamanho);

//Programa main
void main(){

	//Declara��o de vari�veis
	float vetor[TAM], elemento;
	int tamanho = TAM;

	//Corpo do programa

	//Solicita��o de vari�veis
	printf("Digite o elemento que deseja remover: ");
	scanf("%f", &elemento);
	lerVetor(vetor);

	//chamando funcao
	printf("O elemento foi removido %d vezes\n", removerElementos(vetor, elemento, &tamanho));

	//imprimindo vetor
	imprimirVetor(vetor, tamanho);
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


//Fun��o para imprimir vetor
void imprimirVetor(float* vetor, int tamanho){
    int i;//declara��o de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %f\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

int removerElementos(float* vetor, float elemento, int *tamanho){
    //declara��o de variaveis
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

















