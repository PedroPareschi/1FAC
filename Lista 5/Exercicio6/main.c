#include <stdio.h>
#include <stdlib.h>
void main()
{
    //Declara��o de variaveis
    int i, numero, maiorPar=-99999, somatorioPar=0, contPar=0;
    float mediaPar;
    //Estrutura de repeti��o
    for(i=1;i<=200;i++){
            printf("Digite o numero %d: ", i);
            scanf("%d", &numero);
        if(numero%2==0){//Se o elemento for par
            somatorioPar+=numero;//adicionar ao somatorio
            contPar++;
            if(numero>maiorPar){//comparando para ver se � o maior
                maiorPar = numero;
            }
        }
    }
    //Exibindo os resultados
    printf("\n\nO maior numero par fornecido: %d", maiorPar);
    mediaPar = (float) somatorioPar/contPar;
    printf("\n\nA media dos numeros pares: %.1f\n\n", mediaPar);
}
