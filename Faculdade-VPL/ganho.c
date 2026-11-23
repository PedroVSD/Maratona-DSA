#include<stdio.h>
#include<string.h>
int main(){
    char time [40];
    int ano, pontos = 0, i = 0;
    FILE *ganho = fopen("ganhos.txt", "r");

    if(ganho==NULL){
        printf("Erro ao abrir o arquivo");
    } printf("Arquivo aberto com sucesso");

    while(!feof(ganho)){
        fscanf(ganho, "%s %d", time, ano);

        for(i = 0; i <= strlen(time) - 1; i++){
            if(time[i] == 'V'){
                pontos += 3;
            }else if(time[i] == 'E'){
            pontos += 1;
            }  
        } 
        printf("");
    }
    return 0;
}