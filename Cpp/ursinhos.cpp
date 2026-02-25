#include <stdio.h>

int main(){

    int limak, bob, contador = 0;
    scanf("%d %d", &limak, &bob);

    while(limak <= bob){
        limak *= 3;
        bob *= 2;
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}