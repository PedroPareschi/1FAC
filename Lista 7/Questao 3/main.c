//Inclusão de bibliotecas
#include <stdio.h>

//Programa main
void main(){

	//Declaração de variáveis
    int n1Original, n2Original, n1, n2, contN1=0, contN2=0, digitoN1, digitoN2, aux = 1, i;

	//Corpo do programa

	//Solicitação de variáveis
	printf("Digite o valor de n1: ");
	scanf("%d", &n1Original);

	printf("Digite o valor de n2: ");
	scanf("%d", &n2Original);

	//contando algorismos de n1
	n1 = n1Original;

	while(n1!=0){
        contN1++;
        n1 /= 10;
	}

	//contando algorismos de n2
	n2 = n2Original;

	while(n2!=0){
        contN2++;
        n2 /= 10;
	}

	//se possuirem qtdes diferentes
	if(contN1 != contN2){
        printf("\nN2 nao eh N1 embaralhado!\n");
	}

	else{

        //atribuindo n1 e n2
        n1 = n1Original;

        //estrutura de repetição
        do{

            //salvando o ultimo digito de n1
            digitoN1 = n1 % 10;

            //atribuindo n2
            n2 = n2Original;

            //estrutura de repetição
            do{

                ////salvando ultimo digito de n2
                digitoN2 = n2 % 10;

                //diminuindo tamanho de n2
                n2 /= 10;


            }while((n2 != 0) && (digitoN1 != digitoN2));//enquanto n2 existir e os digitos forem diferentes, continuar o loop

            //diminuindo tamanho de n1
            n1 /= 10;

        }while((n1 != 0) && (digitoN1 == digitoN2));//quando n1 deixar de existir, ou quando for descoberto um digito diferente

        //imprimindo resultados
        if((n1 == 0) && (digitoN1==digitoN2)){
            printf("\nN2 eh N1 embaralhado!!\n");
        }
        else{
            printf("\nN2 nao eh N1 embaralhado!\n");
        }
	}
}
