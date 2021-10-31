//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�alho de fun��es
void exibirSequencia(int n);

//Programa main
void main(){

	//Declara��o de vari�veis
	int n;

	//Corpo do programa

	//Solicita��o de vari�veis
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);

	//Chamando fun��o
    exibirSequencia(n);

}

//Fun��o da sequencia
void exibirSequencia(int n){

    //Declara��o de vari�veis
    int i, j;
    //Corpo da fun��o
    if(n > 0){
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){//duas estruturas de repeti��o

                if(j != i){//se i e j forem diferentes entre si

                    printf("(%d %d)", i, j);
                }
            }
        }
    }
    else{//caso o valor de n seja negativo
        for(i = 1; i >= n; i--){
            for(j = -1; j >= n; j--){//duas estruturas de repeti��o

                if(j != i){//se i e j forem diferentes entre si

                    printf("(%d %d)", i, j);
                }
            }
        }
    }
}
