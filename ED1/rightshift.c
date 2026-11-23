#include <stdio.h>
#include <string.h>

void roda_string(char* str, int tam); 

int main(){
    char str[100];
    
    scanf("%s", str);
    printf("Texto sem right-shift\n");
    printf("%s\n", str);    
    int tam = strlen(str);

    roda_string(str, tam);

    printf("Texto com right-shift\n");
    printf("%s\n", str);

    return 0;
}

void roda_string(char* str, int tam){
    if(tam <= 1){
        return;
    }

    char aux = str[tam - 1];

    for(int i = tam - 1; i > 0; i--){
        str[i] = str[i-1];
    }

    str[0] = aux;
}