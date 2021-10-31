/*QUESTÃO 06: Faça um programa que leia
um número N inteiro, menor ou igual a 18.
Se for maior do que 18, o programa exibirá
uma mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
intervalo de 1 a 99, cujos algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93 */

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	//Declaraação de variáveis
	int N, i, j;
	
	//Corpo do programa
	
	//Solicitando o numero
	printf("Digite um numero inteiro: ");
	scanf("%d",&N);
	//Verificando se é maior de 18
	if(N>18){
		printf("Erro: digite um numero menor ou igual a 18\n");
	}
	else{
		//rotação: o algorismo da dezena não deve ultrapassar 9
		while(i<10){
			j++;
			//verificando se aplica a condição
			if(i+j==N){
				printf("%d%d ", i, j);								
			}
			//ao atingir 9, o algorismo da unidade soma uma na dezena e volta a ser 0
			if(j==9){
				i++;
				j = j-9;
			}
		}
	}
}
