//Inclus�o de bibliotecas
#include <stdio.h>

//Defini��o de tamanho
#define TAM 25

//Prot�tipo das fun��es
void lerVetor(int *vetor, int *tamanho);
void uniao(int* A, int tamA, int* B, int tamB, int* C, int* tamC);
void imprimirVetor(int *vetor, int tamanho);

//Programa main
void main(){

	//Declara��o de vari�veis
    int A[TAM], tamA, B[TAM], tamB, C[TAM], tamC;

	//Corpo do programa

	//Solicita��o de vari�veis
	lerVetor(A, &tamA);
	lerVetor(B, &tamB);

	//chamando funcao e imprimindo resultado
	uniao(A, tamA, B, tamB, C, &tamC);
	imprimirVetor(C, tamC);
}

//Fun��o para ler vetor
void lerVetor(int *vetor, int *tamanho){
    //declaracao de variaveis
    int i;
    //corpo da fun��o

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
    *tamC = tamA + tamB;//tamanho de c � a soma dos tamanhos de A e B, considerando que nao haja repeticao
    if(*tamC > TAM){//caso o tamanho de C seja maior que o tamanho permitido, interromper o programa
        printf("Erro: a uniao ultrapassa o limite total permitido dos vetores");
    }
    else{
        for(i = 0; i < tamA; i++){//at� o limite de A
            C[i] = A[i];
        }
        for(/*i = tamA*/; i < (tamA + tamB); i++){//at� o limite de A acrescido do limite de B
            C[i] = B[i - tamA];
        }
    }
}


//Fun��o para imprimir vetor
void imprimirVetor(int *vetor, int tamanho){
    int i;//declara��o de variaveis
    for(i = 0; i < tamanho; i++){
        printf("[%d] = %d\n", i+1, vetor[i]);//imprimindo cada elemento do vetor
    }
    printf("\n");//espaco a mais no final do vetor
}
