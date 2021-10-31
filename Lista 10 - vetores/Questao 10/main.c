//Inclusão de bibliotecas
#include <stdio.h>

//Definição de tamanho
#define TAM 25

//Protótipo das funções
void lerVetor(int *vetor, int *tamanho);
void uniao(int* A, int tamA, int* B, int tamB, int* C, int* tamC);
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
	uniao(A, tamA, B, tamB, C, &tamC);
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

void uniao(int* A, int tamA, int* B, int tamB, int* C, int* tamC){
    int i;//declaracao de i
    *tamC = tamA + tamB;//tamanho de c é a soma dos tamanhos de A e B, considerando que nao haja repeticao
    if(*tamC > TAM){//caso o tamanho de C seja maior que o tamanho permitido, interromper o programa
        printf("Erro: a uniao ultrapassa o limite total permitido dos vetores");
    }
    else{
        for(i = 0; i < tamA; i++){//até o limite de A
            C[i] = A[i];
        }
        for(/*i = tamA*/; i < (tamA + tamB); i++){//até o limite de A acrescido do limite de B
            C[i] = B[i - tamA];
        }
    }
}


//Função para imprimir vetor
void imprimirVetor(int *vetor, int tamanho){
    int i;//declaração de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}
