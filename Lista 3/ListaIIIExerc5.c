/*QUEST�O 05: Fa�a um programa que exiba
na tela os 50 primeiros termos da seguinte
s�rie: 1, -2, 3, -4, 5, -6 ...*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){
	
	//Declaraa��o de vari�veis
	int i;
	//Corpo do programa
	
	//estrutura de repeti��o
	for(i=1;i<=50;i++){
		//conferindo se o n�mero � par ou �mpar
		if(i%2==0){
			printf("%d ", -i);
		}
		else{
			printf("%d ", i);
		}
	}
}
