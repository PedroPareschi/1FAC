//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçalho de funções
void exibirSequencia(int n);

//Programa main
void main(){

	//Declaração de variáveis
	int n;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);

	//Chamando função
    exibirSequencia(n);

}

//Função da sequencia
void exibirSequencia(int n){

    //Declaração de variáveis
    int i, j;
    //Corpo da função
    if(n > 0){
        for(i = 1; i <= n; i++){
            for(j = 1; j <= n; j++){//duas estruturas de repetição

                if(j != i){//se i e j forem diferentes entre si

                    printf("(%d %d)", i, j);
                }
            }
        }
    }
    else{//caso o valor de n seja negativo
        for(i = 1; i >= n; i--){
            for(j = -1; j >= n; j--){//duas estruturas de repetição

                if(j != i){//se i e j forem diferentes entre si

                    printf("(%d %d)", i, j);
                }
            }
        }
    }
}
