#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declara��o de vari�veis
    int N, i, potencia=1, termo=1;
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        printf("%d ", termo);
        potencia *= 2;
        termo *= potencia;
    }
}
