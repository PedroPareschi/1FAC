#include <stdio.h>
#include <stdlib.h>

void main(){
    //Declaração de variáveis
    int N, maiorValor, menorValor, valor, i;
    //Solitação de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    //Estrutura de repetição
    for(i=1;i<=N;i++){
        printf("Digite um numero (%d): ", i);
        scanf("%d", &valor);
        if(i==1 || valor>maiorValor){//caso seja o primeiro valor ou o maior
            maiorValor = valor;
        }
        if(i==1 || valor<menorValor){//caso seja o primeiro ou o menor
            menorValor = valor;
        }
    }
    //imprimindo resultado
    printf("Maior valor: %d\nMenor valor: %d\n", maiorValor, menorValor);
}
