#include <stdio.h>
#include <string.h>
int freq(char frase[], int n);
int main(){
    int n, resp;
    char frase [200];
    scanf("%d", &n);
    for(int i = 0; i < n ;i++){
        fgets(frase, 200, stdin);
    }
    resp = freq(frase,n);
    printf("%d", resp);
    return 0;
}

int freq(char frase[], int n){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(i < 65 && i > 122){
            cont++;
        }
    }
    return cont;
}