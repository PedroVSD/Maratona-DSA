#include<stdio.h>
int main(){
    FILE *arquivo = fopen("arquivo.txt", "r");
    int alunos;
    char nome[50];
    float n1, n2 , m;
    while(!feof(arquivo)){
        fscanf(arquivo, "%s %f %f",nome, &n1, &n2);
        m = (n1+n2)/2;
        if(m>7.0){
            printf("%s", nome);
        }
    }
    fclose(arquivo);
    return 0;
}