#include<stdio.h>
/*#include<stdlib.h>

typedef struct _ALUNO {
    char nome[51];
    int idade;
    int matricula;
} Aluno;

int main() {
    int n;
    printf("Quantos alunos vai cadastrar?\n");
    scanf("%d", &n);

    Aluno *turma = (Aluno*)malloc(n * sizeof(Aluno));

    for (int i = 0; i < n; i++) {
        printf("Qual o nome do %d° aluno?\n", i + 1);
        scanf("%s", turma[i].nome);
        printf("Qual a idade do %d° aluno?\n", i + 1);
        scanf("%d", &(turma[i].idade));
        printf("Qual a matricula do %d° aluno?\n", i + 1);
        scanf("%d", &(turma[i].matricula));
    }

    // Você pode acessar os dados dos alunos usando turma[0], turma[1], etc.

    // Libere a memória alocada dinamicamente quando não for mais necessária.
    free(turma);

    return 0;
}*/

typedef struct _DATA{
    int dia, mes, ano;
}Data;


void estrutura(Data *x){
    printf("%d/%d/%d", x->dia, x->mes, x->ano);
}

int main(){

    Data data;
    Data *p;

    p=&data;

    data.dia = 8;
    data.mes = 10;
    data.ano = 2023;

    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    printf("\n-------------------\n");
    estrutura(p);
    return 0;
}