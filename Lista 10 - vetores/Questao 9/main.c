//Inclusão de bibliotecas
#include <stdio.h>

//definir tamanho maximo
#define TAM 25

//Protótipo das funções
int posicaoNumero(float *vetor, int tamanho, float numero);
void lerVetor(int *vetor, int *tamanho);
void inserirNumero(float *vetor, int *tamanho, float numero);
void imprimirVetor(float *vetor, int tamanho);


//Programa main
void main(){

	//Declaração de variáveis
	float vetor[TAM], numero;
	int tamanho;


	//Corpo do programa

	//Solicitação de variáveis
    printf("Digite um numero: ");
    scanf("%f", &numero);
    tamanho = lerVetor(vetor);
    inserirNumero(vetor, &tamanho, numero);
    imprimirVetor(vetor, tamanho);
}

//Função para ler vetor
void lerVetor(int *vetor, int *tamanho){
    //declaracao de variaveis
    int i;
    //corpo da função

    do{//solicitando tamanho do vetor
        printf("Digite o tamanho do vetor: ");
        scanf("%d", tamanho);
        if((*tamanho < 0) || (*tamanho > TAM)){
            printf("Erro, função com tamanho invalido. Deve ser igual ou superior ao tamanho maximo e nao negativo");
        }
    }while((*tamanho < 0) || (*tamanho > TAM));//caso o tamanho seja invalido

    for(i = 0; i < *tamanho; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}


//Funcao para achar posicao do numero
int posicaoNumero(float *vetor, int tamanho, float numero){
    //declaracao de vairaveis
    int i;
    while((vetor[i] < numero) && (i < tamanho)){//enquanto o elemento for menor que o numero ate o final do vetor
        i++;
    }
    return i;
}

//Função para substituir numero no vetor
void inserirNumero(float* vetor, int* tamanho, float numero){
    if(*tamanho + 1 > TAM){
        printf("Erro: o tamanho do vetor ultrapassa o limite total permitido");
    } else {
        //declaracao de variaveos
        int tam = *tamanho;
        int posicao = posicaoNumero(vetor, tam,  numero), i;//descobrindo a posicao em qu e o numero devera estar
        float aux, aux2;
        //corpo da funcao
        *tamanho = *tamanho + 1;//aumentando o tamanho da funcao
        aux = vetor[posicao];
        vetor[posicao] = numero;//substituindo o elemento do vetor pelo numero
        for(i = posicao+1; i < *tamanho; i++){//movendo todos os numeros para a direita
            aux2 = vetor[i];
            vetor[i] = aux;
            aux = aux2;
        }
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




















