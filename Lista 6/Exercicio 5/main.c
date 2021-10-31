#include <stdio.h>
#include <Ctype.h>

int main()
{
    //Declaração de variaveis
    char opcao = 'S';
    int idade, contAcima50anos = 0, contAlturaMais80kg = 0;
    float altura, peso, somaAlturaMais80kg = 0, mediaAlturaMais80kg, maiorPesoMais165MMenos30Anos = 0;

    //Menu
    while(opcao=='S'){

        //Solicitando variaveis
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura em metros: ");
        scanf("%f", &altura);
        printf("Digite o peso em quilogramas: ");
        scanf("%f", &peso);

        //Contando quem tem mais de 50 anos
        if(idade > 50){
            contAcima50anos++;
        }

        //somando a altura de quem tem mais de 80 kilos
        if(peso > 80){
            somaAlturaMais80kg += altura;
            contAlturaMais80kg++;
        }

        //O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos.
        if((altura > 1.65) && (idade < 30)){
            maiorPesoMais165MMenos30Anos = peso;
        }

        //Peguntando se deseja continuar
        do{
            printf("Deseja continuar? (s/n)\n");
            setbuf(stdin, NULL);//limpando o buff
            scanf("%c", &opcao);
            opcao = toupper(opcao);//tornando a escolha em maiuscula
            if((opcao!='S') && (opcao != 'N')){//Caso a resposta não seja sim nem não
                printf("Erro: caractere invalido\n");
            }
        }while((opcao!='S') && (opcao != 'N'));
        printf("\n\n\n");
    }

    //imprimindo os resultados
    printf("Quantidade de pessoas acima de 50 anos: %d\n", contAcima50anos);
    mediaAlturaMais80kg = somaAlturaMais80kg / contAlturaMais80kg;
    printf("Media de altura das pessoas com mais de 80 kg: %.2f m\n", mediaAlturaMais80kg);
    printf("Maior peso entre as pessoas com mais de 1,65 m de altura e menos de 30 anos: %.2f kg\n", maiorPesoMais165MMenos30Anos);
    return 0;
}
