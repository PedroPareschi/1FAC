#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Delcara��o de vari�veis
    int N, i=2;
   //Solicita��o
   printf("Digite o numero: ");
   scanf("%d", &N);
   while(N%i!=0 && i<N){//caso i nao seja divisor de N e nem igual a N, continuar o loop
        i++;
   }
   if(i<N){//Caso i seja divisor de n e n�o seja o proprio, o numero n�o � primo
        printf("\nO numero nao eh primo!\n");
    }
    else{
        printf("\nO numero eh primo!\n");
    }
}
