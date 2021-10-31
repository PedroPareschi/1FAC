//Inclusão de bibliotecas
#include <stdio.h>

//Cabeçalho das funcoes
void potenciasDe2Intervalo(int a, int b, int *quantPotencias, int *maiorPotencia);
int ehPotencia(int numero);


//Programa main
void main(){

	//Declaração de variáveis
	int a, b, quantPotencias, *pQuantPotencias, maiorPotencia, *pMaiorPotencia;

	//atribuindo endereço aos ponteiros
	pQuantPotencias = &quantPotencias;
	pMaiorPotencia = &maiorPotencia;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite o comeco do intervalo: ");
	scanf("%d", &a);
	printf("Digite o final do intervalo: ");
	scanf("%d", &b);

	//Chamando funcao
	potenciasDe2Intervalo(a, b, pQuantPotencias, pMaiorPotencia);

	//Imprimindo resultado
	printf("\n\nA quantidade de potencias de 2 no intervalo eh %d, sendo o maior %d\n", quantPotencias, maiorPotencia);

}

//Função para encontrar as potencias quadraticas
void potenciasDe2Intervalo(int a, int b, int *quantPotencias, int *maiorPotencia){
    int i;
    int maior = 0;
    int quant = 0;
    for(i = a; i <= b; i++){//estrutura for
        if(ehPotencia(i)){//verificando se é potencia
            quant++;//se for, contar
            if(maior < i){//se for maior que o maior atual
                maior = i;//salvar como maior
            }
        }
    }
    *quantPotencias = quant;//associando os valores aos ponteiros
    *maiorPotencia = maior;
}


//Verifiando se é potencia
int ehPotencia(int numero){
    if(numero <= 0){//se for igual ou menor que zero automaticamente descartar
        return 0;
    }
    int i = 1;//associando i ao valor 1
    while(i < numero){//multiplando por dois ate encontrar o numero
        i *= 2;
    }
    if(i == numero){//se i for igual ao numero
        return 1;//retornar verdadeiro
    }
    return 0;//retornar falso
}
