#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Delcaração de variáveis
    int N, i=2;
   //Solicitação
   printf("Digite o numero: ");
   scanf("%d", &N);
   while(N%i!=0 && i<N){//caso i nao seja divisor de N e nem igual a N, continuar o loop
        i++;
   }
   if(i<N){//Caso i seja divisor de n e não seja o proprio, o numero não é primo
        printf("\nO numero nao eh primo!\n");
    }
    else{
        printf("\nO numero eh primo!\n");
    }
}
