/*QUEST�O 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informa��es dos seus 250 funcion�rios.
Cada funcion�rio dever� responder um
question�rio ao qual informar� os
seguintes dados: matr�cula, g�nero, idade,
sal�rio e tempo (em anos) de trabalho na
empresa. A execu��o do programa deve
exibir os seguintes itens:
a) Quantidade de funcion�rios que
ingressaram na empresa com
menos de 21 anos;
b) Quantidade de funcion�rios do
g�nero feminino;
c) M�dia salarial dos homens;
d) Matr�cula dos funcion�rios mais
antigo e mais novo.*/

//Inclus�o de bibliotecas
#include <stdio.h>

//Programa main
void main(){	
	//Declaraa��o de vari�veis
	int matricula, idade, tempo, menores21, mulheres=0, homens=0, i, maiorIdade, menorIdade, matriculaMaior, matriculaMenor;
	char genero;
	float salario, somaSalarial, mediaSalarial;
	//Corpo do programa
	for(i=1;i<=250;i++){
		//solicitando dados
		printf("Digite sua matricula: ");
		scanf("%d", &matricula);
		printf("Digite seu genero (F ou M): ");
		scanf(" %c", &genero);
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		printf("Digite seu salario: ");
		scanf("%f", &salario);
		printf("Digite seu tempo (em anos) de trabalho na empresa: ");
		scanf("%d", &tempo);
		
		//verificando se os empregados sao menores de 21
		if(idade<21){
			menores21++;
		}
		//verificando genero
		if(genero=='F'){
			mulheres++;
		}
		else{
			homens++;
			//calculando media salarial
			somaSalarial = somaSalarial+salario;
			mediaSalarial = somaSalarial/homens;
		}
		//verificando se � a maior/menor idade
		if(i==1){
			maiorIdade = idade;
			menorIdade = idade;
		}
		else if(maiorIdade<idade){
			maiorIdade = idade;
			matriculaMaior = matricula;
		}
		else if(menorIdade>idade){
			menorIdade = idade;
			matriculaMenor = matricula;
		}
	}
	//retornando resultados
	printf("\n\nFuncionarios com menos de 21 anos: %d\n", menores21);
	printf("Funcionarias mulheres: %d\n", mulheres);
	printf("Media salarial dos homens: %.2f\n", mediaSalarial);
	printf("Matricula do funcionario mais velho: %d\n", matriculaMaior);
	printf("Matricula do funcionario mais jovem: %d", matriculaMenor);
}


