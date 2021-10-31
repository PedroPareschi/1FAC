//Inclusão de bibliotecas
#include <stdio.h>

//Protótipo das funções
int calcularSomatorio(int n);
int fatorial(int n);
int potencia(int base, int expoente);

//Programa main
void main(){

	//Declaração de variáveis
    int n;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite um numero: ");
	scanf("%d", &n);
    //imprimindo resultado
	printf("\nResultado do somatorio com o valor %d = %d\n", n, calcularSomatorio(n));

}

//Função para fatorial
int fatorial(int n){
    if(n < 0){
        return -1;//se o fatorial for negativo, é invalido
    }
    if(n == 0){
        return 1;//se o fator o fatorial for 0 , retorna 1
    }
    if(n == 1){
        return 1;//se o fatorial for 1, idem
    }
    return n * fatorial(n-1);//se for outro valor, multiplicar o valor pelos fatoriais antigos
}

int potencia(int base, int expoente){
    if(expoente < 0){
        return -1;//se for menor que 0, valor invalido
    }
    if(expoente == 0){
        return 1;//se for igual a 0, retornar 1
    }
    if(expoente == 1){
        return base;//se for igual a 1, retornar ele mesmo
    }
    return base * potencia(base, expoente - 1);//se for diferente, retornar a base multiplicada pelas potencias anteriores
}


int calcularSomatorio(int n){
    int soma = 0, i, celula;//declaracao de variaveis
    for(i = 0; i < n; i++){
        celula = (potencia(n-i, i))/(fatorial(i));// o calculo de cada celula
        soma += celula;
    }
    return soma;//retorno de resultado
}


