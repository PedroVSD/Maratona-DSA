#include <stdio.h>

int bubble_sort(int *v, int n);
void preenche_vetor(int *v, int n);

int main(){
    int n;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);

    int v[n];

    preenche_vetor(v, n);
    bubble_sort(v, n);

    printf("O vetor ordenado é: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

   return 0;
}

void preenche_vetor(int *v, int n) {
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

int bubble_sort(int *v, int n) {
    int i, j, aux;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++) {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}