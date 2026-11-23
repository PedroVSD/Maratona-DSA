#include <stdio.h>
int main() {
    long long int numero = 600851475143;
    int x, divisor = 2;
    while (numero > 1) {
        if (numero % divisor == 0) {
            x = divisor;
            numero = numero / divisor;
        }
        divisor++;
    }
    printf("%d", x);
    return 0;
}