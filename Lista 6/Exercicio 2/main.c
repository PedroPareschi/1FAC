#include <stdio.h>
#include <stdlib.h>

/*QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua plantação de café
que gerou um crescimento constante de C % em sua produção, por ano.
Considerando que atualmente sua produção anual seja de M u.p.,
implementar um programa que determine a quantidade de anos necessária para que a produção duplique.*/

void main()
{
    //Declaração de variáveis
    float M, C, producao;
    int contAnos=0;

    //solicitando dados
    printf("Digite a producao anual atual: ");
    scanf("%f", &M);
    printf("Digite o crescimento, em porcentagem, por ano da producao: ");
    scanf("%f", &C);

    producao = M;//atribuindo a producao a variavel M

    //estrutura de repetição
    while(producao<(M*2)){
        producao *= 1 + (C/100);
        contAnos++;
    }

    //imprimindo resultado
    printf("\n\nA producao levou %d anos ate ser duplicada\n\n", contAnos);
}
