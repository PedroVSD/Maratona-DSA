#include <stdio.h>

typedef struct equipe{
    char nome[81]; /* nome do funcionário */
    float valor_hora; /* valor da hora de trabalho em Reais */ 
    int horas_mes; /* horas trabalhadas em um mês */
} Funcionario;

int ordenacao(Funcionario *v, int n);
Funcionario* busca (int n, Funcionario** v, char* nome);

int main(){
    int n;
    printf("Quantos funcionários?\n");
    scanf("%d", &n);
    Funcionario numero_funcionarios[n];

    for(int i = 0; i<n; i++){
        printf("Nome do %d funcionário:\n", i+1);
        scanf("%s", numero_funcionarios[i].nome);
        printf("Qual o valor das horas trabalhadas?\n");
        scanf("%f", &numero_funcionarios[i].valor_hora);
        printf("Quantas horas trabalhadas?\n");
        scanf("%d", &numero_funcionarios[i].horas_mes);
    }


    printf("Funcionários não ordenados");
    for(int i = 0; i<n; i++){
        printf("%s\n", numero_funcionarios[i].nome);
    }

    printf("-----------------------------\n");
    printf("Funcionários em ordem alfabética\n");

    ordenacao(numero_funcionarios, n);

    for(int i = 0; i<n; i++){
        printf("%s\n", numero_funcionarios[i].nome);
    }

    /*printf("Qual o nome do funcionário que deseja buscar?\n");
    char nome[81];
    scanf("%s", nome);
    Funcionario* funcionarios = busca(n, &numero_funcionarios, nome);
    */
    return 0;
}

int ordenacao(Funcionario *v, int n) {
    int troca;
    Funcionario temp;
    
    do {
        troca = 0;
        for (int i = 0; i < n - 1; i++) {
            if (strcmp(v[i].nome, v[i + 1].nome) > 0) {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                troca = 1;
            }
        }
    } while (troca);

    return 0;
}

Funcionario* busca (int n, Funcionario** v, char* nome){

}