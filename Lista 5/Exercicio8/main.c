#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    float x, numero;
    int y, i, cont=0;
    //Corpo do programa
    //Solicitando valores
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    //Laco de repeticao
    for(i=1;i<10;i++){
        printf("Digite um numero real (%d): ", i);
        scanf("%f", &numero);
        if(numero>(x-y) && numero<(x+y)){
            cont++;//se o numero estiver no intervalo, esta contado
        }
    }
    //retornando resultado
    printf("\n\n%d numeros se encontram no intervalo [%.1f, %.1f]\n\n", cont, x-y, x+y);
}
