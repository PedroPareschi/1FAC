#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declara��o de vari�veis
    int N, i;
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //1 � divisor de todo numero
    printf("1 ");
    //Estrutura de repeti��o
    for(i=2;i<N;i++){
        if(N%i==0){
            printf("%d ", i);
        }
    }
    //Todo n�mero � divisor dele mesmo
    printf("%d", N);
}
