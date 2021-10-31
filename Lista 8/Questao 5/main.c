//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�alho de fun��es
int calcularMMC(int x, int y);

//Programa main
void main(){

	//Declara��o de vari�veis
    int x, y, mmc;

	//Corpo do programa

    //Solicita��o de vari�veis
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    //Chamando fun��o
    mmc = calcularMMC(x, y);

    //imprimindo resultados
    printf("\n\nO MMC entre %d e %d eh %d\n", x, y, mmc);
}


//Fun��o para calculo de MMC
int calcularMMC(int x, int y){

    //Declara��o de vari�veis
    int mmc = 1, i = 2;

    //estrutura de repeti��o
    while((x != 1) || (y != 1)){//enquanto x e y forem diferentes de 1

        if((x % i == 0) || (y % i)==0){//se x ou y forem divisiveis pelo numero

            mmc *= i;//mmc � multiplicado pelo tal numero

            //dividido os respectivos numeros
            if(x % i == 0){
                x /= i;
            }

            if(y % i == 0){
                y /= i;
            }
        }
        //caso nenhum seja, acrescenta-lo
        else{
            i++;
        }
    }
    return mmc;
}
