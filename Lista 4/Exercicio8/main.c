#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Declaração de varáveis
    int numeroMultas, i, maiorNumero=-1, maiorNumeroCarteira, carteira;
    float valorMulta, totalMultas = 0, totalRecursos=0;
    char confirmacao='s';
    //solicitando dados de cada motorista
    while(confirmacao=='s' || confirmacao=='S'){
        printf("Digite o numero da carteira de motorista: ");
        scanf("%d", &carteira);
        do{
            printf("Digite o numero de multas do motorista: ");
            scanf("%d", &numeroMultas);
            if(numeroMultas<0){
                printf("\nExcecao: o numero de multas deve ser positivo\n");
            }
        }while(numeroMultas<0);
        if(numeroMultas>maiorNumero){//Definindo a carteira com o maior divida em multas no total
            maiorNumero = numeroMultas;
            maiorNumeroCarteira = carteira;
        }
        for(i=1;i<=numeroMultas;i++){//solicitando valor de cada multa
            printf("Digite o valor da multa %d: ", i);
            scanf("%f", &valorMulta);
            totalMultas+=valorMulta;
        }
        printf("\n\n\nTotal a pagar de %d: RS %.2f", carteira, totalMultas);
        totalRecursos += totalMultas;//somando ao total de cursos o total da multa de determinada carteira
        totalMultas = 0;
        do{
            printf("\n\n\nDeseja continuar? (s/n)\n");
            setbuf(stdin, NULL);
            scanf("%c", &confirmacao);
            if(confirmacao!='s' && confirmacao!='S' && confirmacao!='N' && confirmacao!='n'){
                printf("\nResposta invalida\n");
            }
        }while(confirmacao!='s' && confirmacao!='S' && confirmacao!='N' && confirmacao!='n');
        printf("\n\n\n");
    }
    //Exibindo resultados
    printf("Total de recursos arrecadados: RS %.2f", totalRecursos);
    printf("\n\n\nCarteira com maior quantidade de multas: %d (%d multas)\n\n\n", maiorNumeroCarteira, maiorNumero);
}
