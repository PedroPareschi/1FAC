//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçalho de funções
int calcularMDC(int x, int y);

//Programa main
void main(){

	//Declaração de variáveis
    int x, y, mdc;

	//Corpo do programa

    //Solicitação de variáveis
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    //Chamando função
    mdc = calcularMDC(x, y);

    //imprimindo resultados
    printf("\n\nO MDC entre %d e %d eh %d\n", x, y, mdc);
}

//Função para calcular MDC
int calcularMDC(int x, int y){

    //Declaração de variáveis
    int mdc = 1, i = 2;

    //Estrutura while
    while((x != 1) || (y != 1)){//enquanto x e y forem diferentes de 1
        if((x % i == 0) && (y % i)==0){//se ambos forem divisiveis pelo numero
            mdc *= i;//mdc é multiplicado pelo tal numero

            //divide-se x e y por i
            x /= i;
            y /= i;
        }

        //caso só um seja divisivel, dividi-lo
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




















