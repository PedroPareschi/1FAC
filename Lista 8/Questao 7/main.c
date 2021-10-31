//Inclus�o de bibliotecas
#include <stdio.h>

//Cabe�alho das fun��es
int possuiDivisoresComuns(int n1, int n2);

int contarDivisoresComuns(int n, int a, int b);

//Programa main
void main(){

	//Declara��o de vari�veis
    int n, a, b;

	//Corpo do programa


    //Solicita��o de variaveis
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("Digite o comeco do intervalo: ");
    scanf("%d", &a);
    printf("Digite o final do intervalo: ");
    scanf("%d", &b);

    //chamando a funcao e printando resultado
    printf("\nA qtde de numeros dentro de [%d, %d] que possuem divisores em comum com %d eh %d\n", a, b, n, contarDivisoresComuns(n, a, b));
}

//Fun��o para verificar se h� divisores em comum

int possuiDivisoresComuns(int n1, int n2){
    //declara��o de variaveis
    int resto;

    //corpo do programa
    //algoritmo de euclides
    //enquanto o divisor for diferente de 0
    while(n2 != 0){
        resto = n1 % n2;//calcula-se o resto
        n1 = n2;//transforma o divisor no novo dividendo
        n2 = resto;//tranforma o resto em um novo divisor
    }
    if(n1 != 1){//se n1 n�o for 1, h� divisores em comum
        return 1;
    }
    return 0;//caso contrario, n�o h�
}

//Fun��o para contar divisores

int contarDivisoresComuns(int n, int a, int b){
    //declara��o de vari�veis
    int contador = 0, i;
    //estrutura for
    for(i = a; i<=b; i++){
        if(possuiDivisoresComuns(n, i)){//conferindo se h� divisores em comum
            contador++;//caso haja, acrescentar no contador
        }
    }
    return contador;//retornando resultado
}

