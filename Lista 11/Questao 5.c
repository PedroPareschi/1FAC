//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 25

//Protótipo das funções
void lerVetor(float *vetor, int *tamanho);
void doisMaioresNumeros(float* vetor, int tamanho, float* maior, float* segundoMaior);

//Programa main
void main(){

	//Declaração de variáveis
    float vetor[TAM], maior, segundoMaior;
    int tam;

	//Corpo do programa

	//Solicitação de variáveis
    lerVetor(vetor, &tam);

    //chamando função
    doisMaioresNumeros(vetor, tam, &maior, &segundoMaior);

    //imprimindo resultado
    printf("%f eh o maior numero do vetor, seguido de %f", maior, segundoMaior);

}

//Função para ler vetor
void lerVetor(float *vetor, int *tamanho){
    //declaracao de variaveis
    int i;
    //corpo da função

    do{//solicitando tamanho do vetor
        printf("Digite o tamanho do vetor: ");
        scanf("%d", tamanho);
        if((*tamanho < 0) || (*tamanho > TAM)){
            printf("\nErro, vetor com tamanho invalido. Deve ser igual ou inferior ao tamanho maximo e nao negativo\n");
        }
    }while((*tamanho < 0) || (*tamanho > TAM));//caso o tamanho seja invalido

    for(i = 0; i < *tamanho; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }
}

void doisMaioresNumeros(float* vetor, int tamanho, float* maior, float* segundoMaior){
    int i;
    float primeiro = -9999, segundo, aux;
    for(i = 0; i < tamanho; i++){//atravessando o vetor
        if(vetor[i] > primeiro){//se um numero for maior que o maior anterior
            aux = primeiro;
            primeiro = vetor[i];
            segundo = aux;//o numero atual vira o primeiro maior, e o anterior o segundo
        } else if(vetor[i] > segundo){//caso so seja maior que o segundo
            segundo = vetor[i];//o segundo vira este
        }
    }
    *maior = primeiro;//associando o numero aos respectivos resultados
    *segundoMaior = segundo;
}