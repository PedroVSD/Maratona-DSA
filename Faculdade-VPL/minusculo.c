#include <stdio.h>
#include <ctype.h>
int main(){
    int i;
    char nome[200];
    scanf("%s", nome);
    for(i = 0 ; nome[i] != '\0' ; i++){
        nome[i] = tolower(nome[i]); 
    }
    printf("%s", nome);
    return 0;
}