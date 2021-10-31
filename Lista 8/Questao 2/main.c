//Inclus�o de bibliotecas
#include <stdio.h>

//Declaracao de funcoes
float celsiusParaFahrenheit(float celsius);

//Programa main
void main(){

	//Declara��o de vari�veis
    float celsius, fahrenheit;

	//Corpo do programa

	//Solicita��o de vari�vel
	do{
        printf("Digite a temperatura em graus celsius: ");
        scanf("%f", &celsius);
        if(celsius < -273.15){
            printf("\nErro: o valor solicitado eh menor que o zero absoluto!\n");
        }
	}while(celsius < -273.15);//verificando se o a temperatura digitada � possivel


	//Imprimindo resultado
	fahrenheit = celsiusParaFahrenheit(celsius);
	printf("\n%.1f graus Celsius = %.1f graus Fahrenheit\n", celsius, fahrenheit);

}

//funcao
float celsiusParaFahrenheit(float celsius){
    //Declaracao de variaveis
    float fahrenheint;

    //Corpo do programa
    fahrenheint = (1.8 * celsius) + 32;//formula pra calcular celsius

    //retornando resultado
    return fahrenheint;
}
