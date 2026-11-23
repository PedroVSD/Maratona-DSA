#include <stdio.h>
int main(){
    FILE *arquivo_nome;
    FILE *arquivo_1; 
    char nome[50];
    char teste[20];
    arquivo_nome = fopen("arquivo_nome.txt", "w");
    arquivo_1 = fopen("arquivo_teste.txt", "r");

    if(arquivo_nome == NULL){
        printf("Erro ao abrir oarquivo");
        return 1;
    }

    //printf("O que deseja escrever no arquivo?\n");
    //fgets(nome, 50, stdin);


    while (fscanf(arquivo_1, "%s", teste) != EOF){
        fprintf(arquivo_nome, "%s\n", teste);
    }
    
    fclose(arquivo_nome);
    fclose(arquivo_1);

    return 0;
}