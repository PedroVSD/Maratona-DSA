#include <stdio.h>
int main() {
    int n1, n2, x; 
    char op;
    printf("Dois valores inteiros e a operação");
    scanf("%d %d %c", &n1, &n2, &op);
    switch (op) {
        case '+':
        x = n1+n2;
            printf("A soma de %d e %d é: %d\n", n1, n2, x);
            break;
        case '-':
        x = n1-n2;
            printf("A subtração de %d e %d é: %d\n", n1, n2, x);
            break;
        case '*':
        x = n1*n2;
            printf("O produto de %d e %d é: %d\n", n1, n2, x);
            break;
        default:
            printf("O número não é igual a 1, 2 ou 3.\n");
    }
    return 0;
}