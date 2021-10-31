//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 25

//Protótipo das funções
void lerVetor(int *vetor, int *tamanho);
void interseccao(int* A, int tamA, int* B, int tamB, int* C, int* tamC);
void imprimirVetor(int *vetor, int tamanho);

//Programa main
void main(){

//Declaração de variáveis
    int A[TAM], tamA, B[TAM], tamB, C[TAM], tamC;

	//Corpo do programa

	//Solicitação de variáveis
	lerVetor(A, &tamA);
	lerVetor(B, &tamB);

	//chamando funcao e imprimindo resultado
	interseccao(A, tamA, B, tamB, C, &tamC);
	imprimirVetor(C, tamC);
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
            printf("\nErro, vetor com tamanho invalido. Deve ser igual ou superior ao tamanho maximo e nao negativo\n");
        }
    }while((*tamanho < 0) || (*tamanho > TAM));//caso o tamanho seja invalido

    for(i = 0; i < *tamanho; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void interseccao(int* A, int tamA, int* B, int tamB, int* C, int* tamC){
    //Declaracao de variaveis
    int i, j, k, tamanhoC = 0;
    for(i = 0; i < tamA; i++){//percorrendo primeiro vetor
        for(j = 0; j < tamB; j++){//percorrendo o segundo
            if(A[i] == B[j]){//caso haja algum igual
                for(k = 0; k < tamanhoC; k++){//procurar no terceiro para encontrar se já foi encontrada a repeticao
                    if(A[i] == C[k]){
                        break;
                    }
                }
                if(A[i] != C[k]){//caso a repeticao nao tenha sido encontrada
                    C[tamanhoC] = A[i];//adicionar ao vetor c
                    tamanhoC++;//aumentar vetor C
                }
            }
        }
    }
    *tamC = tamanhoC;//atribuindo o tamanho
}

//Função para imprimir vetor
void imprimirVetor(int *vetor, int tamanho){
    int i;//declaração de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}
