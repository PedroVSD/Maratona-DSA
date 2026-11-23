#include <stdio.h>
#include<time.h>

void bolha(int *v, int n);
void preenche_vetor(int *v, int n);
void insertion(int *v, int n);

int main(){
    int n;
    printf("Tamanho do vetor?\n");
    scanf("%d", &n);

    int vetor[n];

    preenche_vetor(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nOrdenado pelo bubble sort:\n");

    bolha(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nOrdenado pelo insertion sort:\n");

    insertion(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
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

void bolha(int *v, int n){
    int i, j ,aux;
        for(i = 0; i < n; i++){
            for (j = 0; j < n-1; j++){
                if(v[j] > v[j+1]){
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
            
        }
}

void insertion(int *v, int n){
    int i, j , aux;
    for(i = 1; i < n; i++){
        j = i;
        while(j > 0 && v[j-1] > v[j]){
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            j--;
        }
    }
}