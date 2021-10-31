//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�alho de fun��es
int calcularMDC(int x, int y);

//Programa main
void main(){

	//Declara��o de vari�veis
    int x, y, mdc;

	//Corpo do programa

    //Solicita��o de vari�veis
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    //Chamando fun��o
    mdc = calcularMDC(x, y);

    //imprimindo resultados
    printf("\n\nO MDC entre %d e %d eh %d\n", x, y, mdc);
}

//Fun��o para calcular MDC
int calcularMDC(int x, int y){

    //Declara��o de vari�veis
    int mdc = 1, i = 2;

    //Estrutura while
    while((x != 1) || (y != 1)){//enquanto x e y forem diferentes de 1
        if((x % i == 0) && (y % i)==0){//se ambos forem divisiveis pelo numero
            mdc *= i;//mdc � multiplicado pelo tal numero

            //divide-se x e y por i
            x /= i;
            y /= i;
        }

        //caso s� um seja divisivel, dividi-lo
        else if(x % i == 0){
            x /= i;
        }

        else if(y % i == 0){
            y /= i;
        }
        //caso nenhum seja, acrescenta-lo
        else{
            i++;
        }
    }
    return mdc;
}




















