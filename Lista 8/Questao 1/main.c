//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçario de funcoes
void exibirMultiplos(int n, int A, int B);

//Programa main
void main(){

	//Declaração de variáveis
	int n, A, B;

	//Corpo do programa

	//Solicitação de variáveis
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

//Função de exibir multiplos
void exibirMultiplos(int n, int A, int B){
    //Declaração de variaveis
    int i;

    //Corpo da função
    if(A < B){//se a for menor que b
        for(i = A; i <= B; i++){//estrura de repeticao do menor para o maior
            if(i % n == 0){//se for multiplo de n
                printf("%d ", i);//imprimir
            }
        }
    }
    else{//caso contrário
        for(i = B; i >= A; i--){//for do maior para o menor
            if(i % n == 0){//multiplos de n
                printf("%d ", i);//imprimir
            }
        }
    }
    printf("\n");//garantir que a funcao pule uma linha
}
