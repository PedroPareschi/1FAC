#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de variáveis
    int i=1000, cont=0;
    //Corpo do programa
    //estrutura for
    while(cont!=5){
        i++;//adicionando ao i
        if(i%11==5){//divisao por 11 tenha resto 5
            cont++;
        }
    }
    printf("%d\n\n", i);//imprimindo resultado
}
