//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 25

//Protótipo das funções
void lerVetor(int *vetor, int *tamanho);
void imprimirAparicoesElementos(int *vetor, int tamanho);

//Programa main
void main(){

	//Declaração de variáveis
    int vetor[TAM], tamanho;

	//Corpo do programa

	//Solicitação de variáveis
    lerVetor(vetor, &tamanho);

    //chamando função
    imprimirAparicoesElementos(vetor, tamanho);
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
            printf("\nErro, vetor com tamanho invalido. Deve ser igual ou inferior ao tamanho maximo e nao negativo\n");
        }
    }while((*tamanho < 0) || (*tamanho > TAM));//caso o tamanho seja invalido

    for(i = 0; i < *tamanho; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void imprimirAparicoesElementos(int *vetor, int tamanho){
    //declaração de variaveis
    int i, j, k = -1, bandeira, elementos[TAM], aparicoes[TAM];
    //corpo da funcao
    for(i = 0; i < tamanho; i++){//percorrendo o vetor
        bandeira = 0;//variavel para averiguar aparicoes
        for(j = 0; j < k+1; j++){//percorrendo o vetor de aparicoes
            if(vetor[i] == elementos[j]){//caso o elemento ja esteja la
                bandeira = 1;//marcar sua aparicao
                aparicoes[j]++;//contar mais uma aparicao no vetor que conta aparicoes
                break;//sair do loop
            }
        }
        if(bandeira == 0){//caso o elemento nao esteja no vetor dos elementos
            k++;//aumentar o tamanho do vetor de elementos
            elementos[k] = vetor[i];//incluir o elemento
            aparicoes[k] = 1;//inicializar sua correspondente aparicao como 1
        }
    }
    for(i = 0; i < k+1; i++){
        printf("%d: %d vezes\n", elementos[i], aparicoes[i]);//imprimindo resultado;
    }
}