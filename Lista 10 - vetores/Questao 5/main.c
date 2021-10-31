//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 300

//Prot�tipo das fun��es
void lerVetor(int* vetor);
void imprimirVetor(int* vetor, int tamanho);
void dividirVetorParImpar(int* vetorOriginal, int* vetorPar, int* tamPar, int* vetorImpar, int* tamImpar);

//Programa main
void main(){

	//Declara��o de vari�veis
    int vetorOriginal[TAM], vetorPar[TAM], vetorImpar[TAM], tamPar, tamImpar;

	//Corpo do programa

	//Solicita��o de vari�veis
    lerVetor(vetorOriginal);

    //Chamando fun��o
    dividirVetorParImpar(vetorOriginal, vetorPar, &tamPar, vetorImpar, &tamImpar);

    //Imprimindo resultados
    printf("\n\nResutados:\n");
    imprimirVetor(vetorPar, tamPar);
    printf("\n\n\n");
    imprimirVetor(vetorImpar, tamImpar);
}

//Fun��o para ler vetor
void lerVetor(int* vetor){
    //declaracao de variaveis
    int i;
    //corpo da fun��o
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

//Fun��o para imprimir vetor
void imprimirVetor(int* vetor, int tamanho){
    int i;//declara��o de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}

void dividirVetorParImpar(int* vetorOriginal, int* vetorPar, int* tamPar, int* vetorImpar, int* tamImpar){
    //Declara��o de variaveis
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
