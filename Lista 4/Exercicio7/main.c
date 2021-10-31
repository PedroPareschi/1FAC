#include <stdio.h>
#include <stdlib.h>

void main(){

    //Declaração de variáveis
    int i, soma=0, produto=0, valor;
    char confirmacao = 's';
    //Estrutura de repetição
    while(confirmacao=='s' || confirmacao=='S'){
        do{
            printf("Digite o valor: ");
            scanf("%d", &valor);//solicitando valor a cada loop
            if(valor<0){
                printf("\nErro: valor deve ser positivo\n");
            }
        }while(valor<0);
        if(valor%2==0){
            soma+=valor;//se o valor for par, somar
        }
        else{//caso seja impar...
            if(produto==0){//caso seja o primeiro valor, tranformar o produto nele para que produto não seja 0
                produto = valor;
            }
            else{
                produto *= valor;//caso contrário, só multiplicar
            }
        }
        do{
            printf("Deseja continuar? (s/n)\n");
            setbuf(stdin, NULL);
            scanf("%c", &confirmacao);
            if(confirmacao!='s' && confirmacao!='S' && confirmacao!='N' && confirmacao!='n'){
                printf("\nResposta invalida\n");
            }
        }while(confirmacao!='s' && confirmacao!='S' && confirmacao!='N' && confirmacao!='n');
    }
    printf("\n\n\nSoma dos valores pares: %d", soma);
    printf("\n\n\nProduto dos valores impares: %d\n\n\n", produto);
}
