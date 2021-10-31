#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declaração de variáveis
    int N, i;
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repetição
    for(i=1;i<=N;i++){
        if(i%2==0){
            printf("%d ", i);//imprimindo caso seja par
        }
    }
}
