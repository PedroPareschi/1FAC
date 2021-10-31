#include <stdio.h>
#include <stdlib.h>

void main()
{
    //declaração de variáveis
    int i, j;
    //estrutura for
    for(i = 1; i <= 9; i++){
        for(j = 0; j <= 9; j++){//estrutura for interna
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}
