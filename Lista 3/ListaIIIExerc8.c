/*QUESTÃO 08: Em uma empresa deseja-se
fazer um levantamento sobre algumas
informações dos seus 250 funcionários.
Cada funcionário deverá responder um
questionário ao qual informará os
seguintes dados: matrícula, gênero, idade,
salário e tempo (em anos) de trabalho na
empresa. A execução do programa deve
exibir os seguintes itens:
a) Quantidade de funcionários que
ingressaram na empresa com
menos de 21 anos;
b) Quantidade de funcionários do
gênero feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais
antigo e mais novo.*/

//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){	
	//Declaraação de variáveis
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
		//verificando se é a maior/menor idade
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


