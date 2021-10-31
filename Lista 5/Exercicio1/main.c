#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int x, valor, cont=0;
    //Solicitando valor de x
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    for(int i=1;i<=50;i++){
        printf("Digite um numero (%d): ", i);//solicitando o numero
        scanf("%d", &valor);
        if(valor%x==0){//se o numero for multiplo
            cont++;//contar mais um
        }
    }
    //exibindo resultados
    printf("O total de multiplos de %d digitados eh %d", x, cont);
}
