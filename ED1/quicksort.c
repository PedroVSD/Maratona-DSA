#include <stdio.h>
#include <time.h>

void preencher_vetor(int *v, int n);
void quick_sort(int *v, int inicio, int fim);

int main(){
    int n;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);
    int vetor[n];
    preenche_vetor(vetor, n);

    printf("Vetor fora de ordem\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n----------------------\n");

    printf("Vetor ordenado\n");

    quick_sort(vetor, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void preenche_vetor(int *v, int n){
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
    }
}

void quick_sort(int *v, int inicio, int fim){
    int esquerda, direita, meio, pivo, aux;

    esquerda = inicio;
    direita = fim;

    meio = (int)(esquerda + direita) / 2;
    pivo = v[meio];

    while (esquerda <= direita){

        while (v[esquerda] < pivo){
            esquerda++;
        }

        while (v[direita] > pivo){
            direita--;
        }

        if (esquerda <= direita){
            aux = v[esquerda];
            v[esquerda] = v[direita];
            v[direita] = aux;

            esquerda++;
            direita--;
        }
    }

    if (inicio < direita){
        quick_sort(v, inicio, direita);
    }

    if (esquerda < fim){
        quick_sort(v, esquerda, fim);
    }
}