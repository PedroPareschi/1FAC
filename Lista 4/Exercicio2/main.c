#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int N, i, somatorio=0;
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repetição
    for(i=1;i<=N;i++){
        somatorio += i;
    }
    printf("Soma: %d", somatorio);
}
