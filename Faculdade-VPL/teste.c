#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int a, b, c;
    printf("Digite um número \n");
    scanf("%d", &a);
    printf("Digite  outro número \n");
    scanf("%d", &b);
    c = a + b;
    printf("A soma dos valores digitados são : %d", c);
    return 0;
}