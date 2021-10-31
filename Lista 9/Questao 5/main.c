//Inclusão de bibliotecas
#include <stdio.h>

//Protótipo das funções
int exibirTabuadaPotencias(int n);

//Programa main
void main(){

	//Declaração de variáveis
	int n;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite um numero para exibir tabuada: ");
	scanf("%d", &n);

	//Chamando a função
	printf("Codigo: %d\n\n", exibirTabuadaPotencias(n));
}

int exibirTabuadaPotencias(int n){
    //Declaração de variaveis
    int i, nOriginal = n;
    //Estrutura de repeticao
    for(i = 1; i < 10; i++){
        printf("%d ^ %d = %d\n", nOriginal, i, n);//base, potencia e resultado
        n *= nOriginal;//multiplicando n pelo n original
    }
    if((nOriginal > 0) && (nOriginal < 9)){//se o numero for do intervalo, retornar o codigo 1
        return 1;
    }
    return 0;//caso contrario, retornar o codigo 0;
}
