//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�alho da fun��o
void exibir(int n, int a, int b);

//Programa main
void main(){

	//Declara��o de vari�veis
	int n, a, b;

	//Corpo do programa

	//Solicita��o de vari�veis
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
