#include <stdio.h>
#include <string.h>

typedef struct empresa{

    char nome[81]; /* nome do funcionário */ 
    float valor_hora; /* valor da hora de trabalho em Reais */ 
    int horas_mes; /* horas trabalhadas em um mês */

} Funcionario;

int ordenacao(const void *a, const void *b); /* ordena o vetor v de funcionários de tamanho n em ordem alfabética */
Funcionario* busca (int n, Funcionario** v, char* nome); /* retorna o ponteiro para o funcionário com o nome dado ou NULL se não existir */


int main(){
    int n;
    printf("Quantos funcionários?\n");
    scanf("%d", &n);
    Funcionario numero_funcionarios[n];

    for(int i = 0; i < n; i++){
        printf("Qual o nome do %d° funcionário?\n", i+1);
        scanf("%s", numero_funcionarios[i].nome);
        printf("Qual o valor da hora de trabalho em Reais?\n");
        scanf("%f", &numero_funcionarios[i].valor_hora);
        printf("Quantas horas trabalhadas em um mês?\n");
        scanf("%d", &numero_funcionarios[i].horas_mes);
    }
    qsort(numero_funcionarios, n, sizeof(Funcionario), ordenacao);


    printf("Funcionários ordenados por ordem  alfabética:\n");
    for(int i = 0; i < n; i++){
        printf("%s\n", numero_funcionarios[i].nome);
    }

    printf("Qual o nome do funcionário que deseja buscar?\n");
    char nome[81];
    scanf("%s", nome);
    Funcionario* funcionario = busca(n, &numero_funcionarios, nome);

    if(funcionario == NULL){
        printf("Funcionário não encontrado\n");
    return 0;
    }
}

int ordenacao(const void *a, const void *b){
    const Funcionario *funcionarioA = (const Funcionario *)a;
    const Funcionario *funcionarioB = (const Funcionario *)b;
    
    // Use strcmp para comparar os nomes e determinar a ordem alfabética
    return strcmp(funcionarioA->nome, funcionarioB->nome);
}

Funcionario* busca(int n, Funcionario** v, char* nome) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        int comparacao = strcmp(v[meio]->nome, nome);

        if (comparacao == 0) {
            // Nome encontrado, retorna o ponteiro para o funcionário
            return v[meio];
        } else if (comparacao < 0) {
            // O nome está na metade direita
            inicio = meio + 1;
        } else {
            // O nome está na metade esquerda
            fim = meio - 1;
        }
    }

    // Nome não encontrado, retorna NULL
    return NULL;
}
