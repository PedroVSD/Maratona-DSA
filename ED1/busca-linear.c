#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int *v, int n);
int busca_linear(int *v, int n, int flag);

void preenche_vetor(int *v, int n) {
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}
int busca_linear(int *v, int n, int flag) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == flag) {
            return i;
        }
    }
    return -1;
}

int main(){
    int n, flag;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);

    int v[n];

    preenche_vetor(v, n);

    printf("Qual a flag?\n");
    scanf("%d", &flag);

    printf("O vetor é: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    int resp = busca_linear(v, n, flag);
    
    if (resp != -1) {
        printf("\nA flag %d foi encontrada na posição %d do vetor.\n", flag, resp+1);
    } else {
        printf("\nA flag %d não foi encontrada no vetor.\n", flag);
    }    

    return 0;
}