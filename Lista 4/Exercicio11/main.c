#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declaração de variáveis
    int N, i=-1, j=0, k=1, ehTriangular=0;//"booleano"
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repetição
    while(k<N && !(ehTriangular)){
        i++;
        j++;
        k++;//acrescendo os algorismos
        if(k*i*j==N){
            printf("\n\nO numero eh triangular! Resultado de %d x %d x %d\n\n", i, j, k);
            ehTriangular=1;
        }
    }
    if(!ehTriangular){//se não for triangular
        printf("\n\nO numero nao eh triangular!\n\n");
    }
}
