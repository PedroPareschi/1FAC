//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�ario de funcoes
void exibirMultiplos(int n, int A, int B);

//Programa main
void main(){

	//Declara��o de vari�veis
	int n, A, B;

	//Corpo do programa

	//Solicita��o de vari�veis
	printf("Digite o valor do numero do qual deseja exibir os multiplos: ");
    scanf("%d", &n);
    printf("Digite o valor do comeco do intervalo: ");
    scanf("%d", &A);
    printf("Digite o valor do final do intervalo: ");
    scanf("%d", &B);

    //Chamando funcao
    printf("\n");
    exibirMultiplos(n, A, B);
}

//Fun��o de exibir multiplos
void exibirMultiplos(int n, int A, int B){
    //Declara��o de variaveis
    int i;

    //Corpo da fun��o
    if(A < B){//se a for menor que b
        for(i = A; i <= B; i++){//estrura de repeticao do menor para o maior
            if(i % n == 0){//se for multiplo de n
                printf("%d ", i);//imprimir
            }
        }
    }
    else{//caso contr�rio
        for(i = B; i >= A; i--){//for do maior para o menor
            if(i % n == 0){//multiplos de n
                printf("%d ", i);//imprimir
            }
        }
    }
    printf("\n");//garantir que a funcao pule uma linha
}
