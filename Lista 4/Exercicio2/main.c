#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declara��o de vari�veis
    int N, i, somatorio=0;
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repeti��o
    for(i=1;i<=N;i++){
        somatorio += i;
    }
    printf("Soma: %d", somatorio);
}
