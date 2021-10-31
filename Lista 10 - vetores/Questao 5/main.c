//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 300

//Protótipo das funções
void lerVetor(int* vetor);
void imprimirVetor(int* vetor, int tamanho);
void dividirVetorParImpar(int* vetorOriginal, int* vetorPar, int* tamPar, int* vetorImpar, int* tamImpar);

//Programa main
void main(){

	//Declaração de variáveis
    int vetorOriginal[TAM], vetorPar[TAM], vetorImpar[TAM], tamPar, tamImpar;

	//Corpo do programa

	//Solicitação de variáveis
    lerVetor(vetorOriginal);

    //Chamando função
    dividirVetorParImpar(vetorOriginal, vetorPar, &tamPar, vetorImpar, &tamImpar);

    //Imprimindo resultados
    printf("\n\nResutados:\n");
    imprimirVetor(vetorPar, tamPar);
    printf("\n\n\n");
    imprimirVetor(vetorImpar, tamImpar);
}

//Função para ler vetor
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da função
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

//Função para imprimir vetor
void imprimirVetor(int* vetor, int tamanho){
    int i;//declaração de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

void dividirVetorParImpar(int* vetorOriginal, int* vetorPar, int* tamPar, int* vetorImpar, int* tamImpar){
    //Declaração de variaveis
    int i, j=0, k=0;

    //vetor original
    for(i = 0; i < TAM; i++){
        if(vetorOriginal[i] % 2 == 0){//se vetor for par, inclui-lo no vetor de pares
            vetorPar[j] = vetorOriginal[i];
            j++;
        } else {//se vetor for impar, idem
            vetorImpar[k] = vetorOriginal[i];
            k++;
        }
    }
    //definindo os tamanhos dos vetores
    *tamPar = j;
    *tamImpar = k;
}
