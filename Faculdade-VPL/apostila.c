/*#include <stdio.h>
#include <string.h>
int main() {
    char n[21] , n2[21];
    printf("Manda duas palavras de ate 20 caracteres\n");
    fgets(n, sizeof(n), stdin);
    n[strcspn(n, "\n")] = '\0';
    fgets(n2, sizeof(n), stdin);
    n2[strcspn(n, "\n")] = '\0';
    printf("%s - %s", n, n2);
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int n1;
    float n2;
    char n3;
    scanf("%d %f %c", &n1, &n2, &n3);
    printf("%d\n%.1f\n%c", n1, n2, n3);
}*/

/*#include <stdio.h>
int main() {
    int decimal;
    printf("Digite um valor inteiro: ");
    scanf("%d", &decimal);
    
    printf("Valor em hexadecimal: %x\n", decimal);
    printf("Valor em octal: %o\n", decimal);
    
    return 0;
}*/

void main(){
    char l;
    scanf("%c", &l);
    if(l >= 'A' && l <= 'Z'){
        char lm = l - 'A' + 'a';
        printf("A letra digitada em maiúsculo :\n%c", lm);
    } else {
        printf("Você já digitou uma letra minúscula");
    }
}


