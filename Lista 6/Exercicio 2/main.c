#include <stdio.h>
#include <stdlib.h>

/*QUEST�O 02: Um fazendeiro realizou um tratamento sobre sua planta��o de caf�
que gerou um crescimento constante de C % em sua produ��o, por ano.
Considerando que atualmente sua produ��o anual seja de M u.p.,
implementar um programa que determine a quantidade de anos necess�ria para que a produ��o duplique.*/

void main()
{
    //Declara��o de vari�veis
    float M, C, producao;
    int contAnos=0;

    //solicitando dados
    printf("Digite a producao anual atual: ");
    scanf("%f", &M);
    printf("Digite o crescimento, em porcentagem, por ano da producao: ");
    scanf("%f", &C);

    producao = M;//atribuindo a producao a variavel M

    //estrutura de repeti��o
    while(producao<(M*2)){
        producao *= 1 + (C/100);
        contAnos++;
    }

    //imprimindo resultado
    printf("\n\nA producao levou %d anos ate ser duplicada\n\n", contAnos);
}
