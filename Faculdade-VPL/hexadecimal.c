#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int hexa[100];
    int n, i, resto, x; 
    int numero[100000];

    //printf("Qual a grandeza do número?\n");
    //scanf("%d", &n);

    //printf("Número a ser convertido:\n");
    fgets(numero, 1000, stdin);
    x = atoi(numero);

    for (i = 0; x > 0; i++) {
        resto = x % 16;
        x = x / 16;

        if (resto > 9) {
            switch (resto) {
                case 10:
                    hexa[i] = 'A';
                    break;
                case 11:
                    hexa[i] = 'B';
                    break;
                case 12:
                    hexa[i] = 'C';
                    break;
                case 13:
                    hexa[i] = 'D';
                    break;
                case 14:
                    hexa[i] = 'E';
                    break;
                case 15:
                    hexa[i] = 'F';
                    break;
            }
        } else {
            hexa[i] = resto + '0';
        }
    }
    //printf("Representação hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    return 0;
}


/*
#include <stdio.h>
int main(){
    int hexa[100];
    char numero [] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"};
    int i, resto;
    fgets(hexa, 100, stdin);
    for(i = 0; i < n; i++){
        switch(){
            case 'A':

            break;
            case 'B':

            break;
            case 'C':
            
            break;
            case 'D':
            
            break;
            case 'E':

            break;
            case 'F':

            break;
        }
    }
    puts(resto);
}





#include <stdio.h>

int main() {
    unsigned int numero;
    char hexadecimal[100];
    int indice = 0;

    printf("Digite um número natural: ");
    scanf("%u", &numero);

    if (numero == 0) {
        printf("Representação hexadecimal: 0\n");
        return 0;
    }

    while (numero > 0) {
        int resto = numero % 16;

        if (resto < 10)
            hexadecimal[indice] = resto + '0';
        else
            hexadecimal[indice] = resto - 10 + 'A';

        numero /= 16;
        indice++;
    }

    printf("Representação hexadecimal: ");
    for (int i = indice - 1; i >= 0; i--)
        printf("%c", hexadecimal[i]);

    printf("\n");

    return 0;
}
*/