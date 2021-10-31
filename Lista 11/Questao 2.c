//Definição de tamanho
#define TAM 25

//Protótipo das funções
void lerVetor(int *vetor, int *tamanho);
int estaContido(int *A, int n1, int *B, int n2);

//Programa main
void main(){

	//Declaração de variáveis
    int A[TAM], n1, B[TAM], n2;

	//Corpo do programa

	//Solicitação de variáveis
    printf("Para o vetor A\n");
    lerVetor(A, &n1);
    printf("Para o vetor B\n");
    lerVetor(B, &n2);

    //Impressão de resultado
    int resultadoContido = estaContido(A, n1, B, n2);
    if (resultadoContido == 1)
    {
        printf("A esta contido em B");
    } else if(resultadoContido == 2){
        printf("B esta contido em A");
    } else {
        printf("Nenhum esta contido em outro");
    }
    

}

//Função para ler vetor
void lerVetor(int *vetor, int *tamanho){
    //declaracao de variaveis
    int i;
    //corpo da função

    do{//solicitando tamanho do vetor
        printf("Digite o tamanho do vetor: ");
        scanf("%d", tamanho);
        if((*tamanho < 0) || (*tamanho > TAM)){
            printf("\nErro, vetor com tamanho invalido. Deve ser igual ou superior ao tamanho maximo e nao negativo\n");
        }
    }while((*tamanho < 0) || (*tamanho > TAM));//caso o tamanho seja invalido

    for(i = 0; i < *tamanho; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

int estaContido(int *A, int n1, int *B, int n2){
    int i, j, bandeira;
    if(n2 >  n1){//se o segundo vetor for maior que o primeiro
        for(i = 0; i < n1; i++){//loop do menor vetor
            bandeira = 0;//variavel de verificacao
            for(j = 0; j < n2; j++){//loop do maior vetor
                if(A[i] == B[j]){//caso todos os numeros do A estajam em B, continuar
                    bandeira = 1;
                    break;
                }
            }
            if(!bandeira){//caso haja algum numero de A que nao exista em B, parar o programa e retornar 0
                return 0;
            }
        }
        return 1;
    } else {//caso o primeiro vetor for maior, o mesmo processo as avessas
        bandeira = 0;
        for(i = 0; i < n2; i++){
            bandeira = 0;
            for(j = 0; j < n1; j++){
                if(A[j] == B[i]){
                    bandeira = 1;
                }
            }
            if(!bandeira){
                return 0;
                break;
            }
        }
        return 2;
    }
}