//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçalho
void leituraDados(int* quant, int* maximo);

//Programa main
void main(){

	//Declaração de variáveis
    int quant, max, *quantidade = &quant, *maximo = &max;

	//Corpo do programa
    leituraDados(quantidade, maximo);
    printf("A quantidade de valores digitados eh %d e o maior eh %d", quant, max);
}

void leituraDados(int* quantidade, int* maximo){
    int numero, cont = 0, max = -99999;
    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        cont++;
        if(numero > max){
            max = numero;
        }
    }while(numero != 0);
    *quantidade = cont - 1;
    *maximo = max;
}
