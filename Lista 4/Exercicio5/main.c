#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declara��o de vari�veis
    int N, i, termo = 1;
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //estrutura de repeti��o
    for(i=1;i<=N;i++){
        printf("%d ", termo);
        termo *= 2;
    }
}
