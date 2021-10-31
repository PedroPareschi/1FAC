//Inclus�o de bibliotecas
#include <stdio.h>

//Prot�tipo das fun��es
int calcularLogaritmo(int base, int logaritmando);

//Programa main
void main(){

	//Declara��o de vari�veis
    int a, b, resultado;//base, logaritmando e resultado

	//Corpo do programa

	//Solicita��o de vari�veis
    printf("Digite o valor da base: ");
    scanf("%d", &a);
    printf("Digite o valor do logaritmando: ");
    scanf("%d", &b);

    //imprimindo funcao e chamando resultado
    resultado = calcularLogaritmo(a, b);
    if(resultado!= -1){
        printf("\nLogaritmo de %d na base %d = %d\n", b, a, resultado);
    }

}

//fun��o para calcular logaritmando
int calcularLogaritmo(int base, int logaritmando){

    //Antes de prosseguir, verificar se satisfazem a condi��o de exist�ncia
    if((base<0) || (base==1)){
        printf("\nValor invalido, a base deve ser positiva e diferente de 1\n");
        return -1;//n�o h� solu��o real
    }

    if(logaritmando<0){
        printf("\nValor invalido, o logaritmando deve ser positivo\n");
    }

    //Declara��o de vai�veis
    int resultado = 0;//o resultado come�a em zero
    int baseOriginal = base;//salvando a base original

    //Corpo da fun��o
    while(base <= logaritmando){
        base *= baseOriginal;//mulsiplicando a base pela sua base original at� achar o resultado
        resultado++;//a pot�ncia
    }
    return resultado;//retornando resultado
}
