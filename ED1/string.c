#include <stdio.h>

int ultima_ocorrencia(char* s, char c); 

int main(){
    char s[100];
    char c;
    fgets(s, 100, stdin);
    scanf("%c", &c);
    int res = ultima_ocorrencia(s, c);
    printf("%d\n", res);
    return 0;
}

int ultima_ocorrencia(char* s, char c){
    int i = 0;
    int pos = -1;
    while(s[i] != '\0'){
        if(s[i] == c){
            pos = i;
        }
        i++;
    }
    return pos;
}