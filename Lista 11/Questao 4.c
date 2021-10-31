/*A função busca desse algoritmo recebe
um vetor ordenado de forma crescente e um
valor a ser pesquisado. A partir disso, essa
função verificará se o número armazenado no
ponto mediano do vetor é o número procurado.
Se for o número procurado, retornará o índice
da posição do elemento no vetor e encerrará a
busca. Se não for, a função segmentará o vetor
em duas partes a partir do ponto mediano,
escolherá o segmento no qual o valor procurado
está inserido, e o processo se repetirá.*/

//Definição de TAM
#define TAM 9

//Protótipo das funções
void lerVetor(int *vetor);
int busca(int* v, int k);

//Programa main
void main(){

	//Declaração de variáveis
    int v[TAM], k;

	//Corpo do programa

	//Solicitação de variáveis
    lerVetor(v);
    printf("Digite o elemento que deseja buscar: ");
    scanf("%d", &k);
    printf("Posicao do elemento no vetor: %d", k);
}

//Função para ler vetor
void lerVetor(int *vetor){
    //declaracao de variaveis
    int i;
    //corpo da funçã;
    for(i = 0; i < TAM; i++){
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

int busca(int* v, int k){
    int c = 0, f = 0, m = 0;
    f = 9;
    c = 1;
    while((v[m] != k) || (f > c)){
        m = (c+f)/2;
        if(k < v[m]){
            f = m - 1;
        } else {
            c = m + 1;
        }
    }
    if(v[m] != k){
        return 0;
    } else {
        return m;
    }
}