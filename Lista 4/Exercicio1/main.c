#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declara��o de vari�veis
    int N, i;
    //Solita��o de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repeti��o
    for(i=1;i<=N;i++){
        if(i%2==0){
            printf("%d ", i);//imprimindo caso seja par
        }
    }
}
