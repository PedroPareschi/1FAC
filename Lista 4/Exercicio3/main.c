#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int N, i;
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //1 é divisor de todo numero
    printf("1 ");
    //Estrutura de repetição
    for(i=2;i<N;i++){
        if(N%i==0){
            printf("%d ", i);
        }
    }
    //Todo número é divisor dele mesmo
    printf("%d", N);
}
