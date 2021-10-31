#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    float altura, maiorAltura=0, menorAltura=3, somatorioAlturaF=0, mediaAlturaF, somatorioAltura=0, mediaAltura, percentualHomens;
    int i, qtdeHomens=0,qtdeMulheres=0;
    char genero;
    for(i=1;i<=50;i++){
        //Solicitando variaveis
        printf("Pessoa %d\n", i);
        printf("Altura: ");
        scanf("%f", &altura);
        somatorioAltura += altura;//fazendo o somatório para cálculo da média
        if(altura>maiorAltura){
            maiorAltura = altura;//estabelecendo a maior altura
        }
        if(altura<menorAltura){//caso a pessoa seja a primeira da lista, sua altura será o primeiro parametro
            menorAltura = altura;//estabelecendo a menor altura
        }
        printf("Genero: ");
        setbuf(stdin, NULL);
        scanf("%c", &genero);
        if(genero=='m' || genero=='M'){//se o gênero masculino, incluir no contador
            qtdeHomens++;
        }
        else if(genero=='f' || genero=='F'){//se o genero for feminino usar os dados para calculo da media
            somatorioAlturaF += altura;
            qtdeMulheres++;
        }
    }
    //imprimindo resultados
    printf("\n\n\nMaior altura registrada: %.2fm", maiorAltura);
    printf("\n\nMenor altura registrada: %.2fm", menorAltura);
    mediaAlturaF = somatorioAlturaF/qtdeMulheres;//calculando media da altura feminina
    printf("\n\nMedia de altura feminina: %.2fm", mediaAlturaF);
    mediaAltura = somatorioAltura/50;//calculando media da altura geral
    printf("\n\nMedia de altura geral: %.2fm", mediaAltura);
    percentualHomens = ((float) qtdeHomens/50) * 100; //calculando percentual de homens
    printf("\n\nPercentual de homens: %.1f%%", percentualHomens);

}
