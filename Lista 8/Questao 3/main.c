//Inclusão de bibliotecas
#include <stdio.h>

//Declaracao de funcao
void exibirFibonacci(int n);

//Programa main
void main(){

	//Declaração de variáveis
	int n;

	//Corpo do programa

    //Solicitacao de variaveis
    do{
        printf("Digite a posicao do n-esimo termo de Fibonacci: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nErro: a posicao deve ser um valor positivo diferente de 0!\n\n");
        }
    }while(n < 1);//verificando se a posição é valida

    printf("\n");//pulando linha

    //chamando função
    exibirFibonacci(n);
}

//Função
void exibirFibonacci(int n){

    //Declaração de variáveis
    int i, atual = 1, anterior = 0, aux;

    //Printando o primeiro numero
    printf("%d ", anterior);

    //estrutura for para a partir do segundo numero
    for(i = 2; i <= n; i++){
        printf("%d ", atual);//printando o algorismo
        aux = atual;//variavel auxiliar para reservar o valor original do algorismo
        atual += anterior;//somando o algorismo ao seu anterior, k (atual = atual + anterior)
        anterior = aux;//ao algorismo anterior, é atribuido o valor do atual
    }
    printf("\n");//espaco
}
