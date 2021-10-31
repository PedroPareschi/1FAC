#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int N, i, termo = 1;
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //estrutura de repetição
    for(i=1;i<=N;i++){
        printf("%d ", termo);
        termo *= 2;
    }
}
