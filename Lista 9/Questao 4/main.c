//Inclusão de bibliotecas
#include <stdio.h>

//Protótipo das funções
int calcularLogaritmo(int base, int logaritmando);

//Programa main
void main(){

	//Declaração de variáveis
    int a, b, resultado;//base, logaritmando e resultado

	//Corpo do programa

	//Solicitação de variáveis
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

//função para calcular logaritmando
int calcularLogaritmo(int base, int logaritmando){

    //Antes de prosseguir, verificar se satisfazem a condição de existência
    if((base<0) || (base==1)){
        printf("\nValor invalido, a base deve ser positiva e diferente de 1\n");
        return -1;//não há solução real
    }

    if(logaritmando<0){
        printf("\nValor invalido, o logaritmando deve ser positivo\n");
    }

    //Declaração de vaiáveis
    int resultado = 0;//o resultado começa em zero
    int baseOriginal = base;//salvando a base original

    //Corpo da função
    while(base <= logaritmando){
        base *= baseOriginal;//mulsiplicando a base pela sua base original até achar o resultado
        resultado++;//a potência
    }
    return resultado;//retornando resultado
}
