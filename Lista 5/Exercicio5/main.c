#include <stdio.h>
#include <stdlib.h>
void main()
{
    //Declaração de variáveis
    int n, i;
    float valor, peso, somatorio=0, media, somatorioPesos=0;
   //Solicitando total de elementos
   printf("Digite o numero de total de elementos que deseja calcular a media ponderada: ");
   scanf("%d", &n);
   //Somatorio dos elementos
   for(i=1;i<=n;i++){
    printf("Elemento %d\n", i);
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    //calculando o somatorio
    somatorio += (valor*peso);
    somatorioPesos += peso;//somando os pesos
   }
   media = somatorio/somatorioPesos;//calculando a media;
   printf("\n\nMedia ponderada: %.2f\n\n", media);
}

