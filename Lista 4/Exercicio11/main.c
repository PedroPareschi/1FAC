#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declara��o de vari�veis
    int N, i=-1, j=0, k=1, ehTriangular=0;//"booleano"
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repeti��o
    while(k<N && !(ehTriangular)){
        i++;
        j++;
        k++;//acrescendo os algorismos
        if(k*i*j==N){
            printf("\n\nO numero eh triangular! Resultado de %d x %d x %d\n\n", i, j, k);
            ehTriangular=1;
        }
    }
    if(!ehTriangular){//se n�o for triangular
        printf("\n\nO numero nao eh triangular!\n\n");
    }
}
