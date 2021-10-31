#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    float salario, somatorioSalario=0, mediaSalario, maiorSalario=0, percentualSalarioAbaixo1000;
    int numeroFilhos, somatorioNumeroFilhos=0, mediaNumeroFilhos, i, contSalarioAbaixo1000;
    //Estrutura de repeticao
    for(i=1;i<=300;i++){
        //Solicitando variaveis
        printf("Habitante %d\n", i);
        printf("Digite o salario: ");
        scanf("%f", &salario);
        somatorioSalario += salario;//somatorio pro calculo da media
        if(salario>maiorSalario){//comparando com maior salario
            maiorSalario = salario;
        }
        if(salario<1000){
            contSalarioAbaixo1000++;//contando as pessoas com salario abaixo de 1000
        }
        printf("Digite o numero de filhos: ");
        scanf("%d", &numeroFilhos);
        somatorioNumeroFilhos += numeroFilhos;//somatorio pro numero de filhos
    }
    //Exibindo resultados
    mediaSalario = somatorioSalario/300;//calculando media de salario
    printf("\n\nMedia de salario: RS%.2f", mediaSalario);
    mediaNumeroFilhos = somatorioNumeroFilhos/300;//calculando media de filhos
    printf("\n\nMedia de numero de filhos: %d", mediaNumeroFilhos);
    printf("\n\nMaior salario: RS%.2f", maiorSalario);
    percentualSalarioAbaixo1000 = (contSalarioAbaixo1000/300.0) * 100;//calculando percentual dos que tem salario abaixo de 1000
    printf("\n\nPercentual de pessoas com salario abaixo de RS 1000.00: %.1f%%\n\n", percentualSalarioAbaixo1000);
}
