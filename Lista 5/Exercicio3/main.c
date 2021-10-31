#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int base, expoente, i, potencia = 1;
    //solicitando variaveis
    printf("Digite a potencia no formato base^expoente: ");
    scanf("%d^%d", &base, &expoente);
    for(i=1;i<=expoente;i++){
        potencia *= base;//cada interacao multiplica o resultado pela base
    }
    printf("%d^%d = %d", base, expoente, potencia);
}
