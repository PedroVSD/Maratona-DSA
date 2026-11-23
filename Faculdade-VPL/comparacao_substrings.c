#include <stdio.h>
#include <string.h>
void comparacao(char frase1[], char frase2[]);
int main(){
    char frase1[51], frase2[51];
    fgets(frase1, 51, stdin);
    fgets(frase2, 51, stdin);
    comparacao(frase1, frase2);
    return 1;
}

void comparacao(char frase1[], char frase2[]){
    int cont = 0, maximo = 0;
    for(int i = 0; i < strlen(frase1); i++){
        for(int j = 0; j < strlen(frase2); j++){
            if(frase1[i] == frase2[j]){
                cont++;
            } else{
                if(cont > maximo){
                    maximo = cont;
                    cont = 0;
                }
            }
        }
    }
    printf("%d" , maximo);
}
