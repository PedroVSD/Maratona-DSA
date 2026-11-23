#include <stdio.h>
#include <string.h>
int main() {
    int numero = 100;
    int contador = 0;
    char tecla;
    while (numero <= 999) {
        int centena = numero / 100;
        int dezena = (numero / 10) % 10;
        int unidade = numero % 10;
        int produto = centena * dezena * unidade;
        printf("Produto dos dígitos de %d: %d\n", numero, produto);
        contador++;
        if (contador % 20 == 0) {
            printf("Pressione qualquer tecla para continuar...");
            scanf(" %c", &tecla);
        }
        numero++;
    }
    return 0;
}
