/*QUEST�O 06: Fa�a um programa que leia
um n�mero N inteiro, menor ou igual a 18.
Se for maior do que 18, o programa exibir�
uma mensagem de erro e terminar� a sua
execu��o; caso contr�rio, dever� exibir os
n�meros no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os n�meros que est�o no
intervalo de 1 a 99, cujos algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93 */

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	//Declaraa��o de vari�veis
	int N, i, j;
	
	//Corpo do programa
	
	//Solicitando o numero
	printf("Digite um numero inteiro: ");
	scanf("%d",&N);
	//Verificando se � maior de 18
	if(N>18){
		printf("Erro: digite um numero menor ou igual a 18\n");
	}
	else{
		//rota��o: o algorismo da dezena n�o deve ultrapassar 9
		while(i<10){
			j++;
			//verificando se aplica a condi��o
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
