#include <stdio.h>
#include<string.h>
int main(){
    FILE *aluno = fopen("arquivo.txt", "r");
    char nome[20]={0};
    char sobrenome[20]={0};
    float m = 0, n1, n2;

    if(aluno == NULL){
        printf("erro ao abrir o arquivo");
    }
    while (!feof(aluno)){
        fscanf(aluno, "%s %s", nome, sobrenome);
        strcat(nome, " ");
        strcat(nome, sobrenome);
        nome[strlen(nome)-1]='\0';
        fscanf(aluno, "%f %f", &n1, &n2);
        m = (n1+n2)/2;
        if(m>=5){
            printf("%s %.1f %.1f %.1f aprovado", nome, n1, n2, m);
        } else{
            printf("%s %.1f %.1f %.1f reprovado", nome, n1, n2, m);
        }
    }
    fclose(aluno);
    return 0;
}