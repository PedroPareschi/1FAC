#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int i;
    float numero, somatorio50primeiros=0, menorNumero51a100, media101a150, somatorio101a50=0;
    //Estrutura de repeticao
    for(i=1;i<=50;i++){//para os primeiros 50 algorismos
        printf("Digite um numero (%d): ", i);
        scanf("%f", &numero);
        somatorio50primeiros+=numero;//calcular o somatorio
    }
    for( ;i<=100;i++){//para a segunda parte dos algorismos
        printf("Digite um numero (%d): ", i);
        scanf("%f", &numero);
        if(i==51 || numero<menorNumero51a100){
            menorNumero51a100 = numero;//salvando o menor numero
        }
    }
    for(;i<=150;i++){//para os ultimos algorismos
        printf("Digite um numero (%d): ", i);
        scanf("%f", &numero);
        somatorio101a50 += numero;
    }
    media101a150 = somatorio101a50/50;//calculando a media
    //exibindo resultados
    printf("\n\n\nSoma dos primeiros 50 algorismos: %.1f", somatorio50primeiros);
    printf("\n\nMenor numero na segunda parte dos algorismos: %.1f", menorNumero51a100);
    printf("\n\nMedia dos ultimos algorismos: %.1f\n\n", media101a150);
}
