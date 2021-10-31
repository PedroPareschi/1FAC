/* QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio
semanal de uma pessoa, determinado pelas
condi��es que seguem: se o n�mero de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contr�rio, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa
void main ()
{
	//Declara��o de v�ri�veis
	float x, salario;
	int horas;
	
	//Corpo do programa
	
	//Solicita��o de dados
	printf("Digite o pagamento por hora: ");
	scanf("%f", &x);
	printf("Digite as horas trabalhadas: ");
	scanf("%d", &horas);
	
	//Calculando o salario
	salario = x*horas;
	if(horas<=40)
	{
		printf("Salario: R$ %.2f", salario);
	}
	else
	{
		salario = salario + (horas-40)*(x/2);
		printf("Salario: R$ %.2f", salario);
	}
}
