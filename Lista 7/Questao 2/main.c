//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){

	//Declara��o de vari�veis
    int n, i, j;

	//Corpo do programa

	//Solicita��o de vari�veis
	printf("Digite o valor de N: ");
	scanf("%d", &n);

	//estruturas de repeti��o for
    for(i = 1; i <= n; i++){//para as linhas
        for(j = 1; j <= n; j++){//para as colunas
            if(i >= j){//caso a posicao da linha seja maior do que a da coluna
                printf("%d ", (i-j)+1);//printar a diferenca entre linha e coluna + 1
            }
            else{//caso contr�rio
                printf("%d ", 0);//printar 0

                if(j==n){//caso esteja na �ltima coluna
                    printf("\n");//pular linha
                }
            }
        }
    }
}
