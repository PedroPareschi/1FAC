#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declara��o de vari�veis
    int a1, r, N, i;
    //Solicitando vari�veis
    printf("Digite o numero de termos N: ");
    scanf("%d", &N);
    printf("Digite o primeiro valor a1: ");
    scanf("%d", &a1);
    printf("Digite a razao r: ");
    scanf("%d", &r);
    //Estrutura de repeti��o
    for(i=1;i<=N;i++){
        printf("%d ", a1 + ((i-1)*r)/*formula de um termo ai da PA*/);
    }
}
