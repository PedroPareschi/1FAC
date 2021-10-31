//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçalho da função
void exibir(int n, int a, int b);

//Programa main
void main(){

	//Declaração de variáveis
	int n, a, b;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite os valores de n, a e b: ");
	scanf("%d %d %d", &n, &a, &b);

	exibir(n, a, b);
}

void exibir(int n, int a, int b){
    int i;
    for(i = a; i <= b; i++){
        if(!(i%n==0)){
            printf("%d ", i);
        }
    }
    printf("\n");
}
