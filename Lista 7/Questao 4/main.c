//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){

	//Declara��o de vari�veis
    int n1, n2, resto, n1Original, n2Original;

	//Corpo do programa

	//Solicita��o de vari�veis
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1Original);
    printf("Digite o segundo o numero: ");
    scanf("%d", &n2Original);


    //Descobrindo o MDC
    while(n2 != 0){
        resto =  n1 % n2;
        n1 = n2;
        n2 = resto;
    }//algoritmo de euclides: dividir n1 por n2, entao dividir o divisor pelo resto consecutivamente at� obter resto 0. N1 ser� entao o MDC
    if(n1==1){
        printf("\nOs numeros sao primos entre si\n");
    }
    else{
        printf("\nOs numeros nao sao primos entre si\n");
    }
}
