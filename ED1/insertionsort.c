#include <stdio.h>
#include <time.h>

void preenche_vetor(int *v, int n);
void insertion_sort(int *v, int n);

int main(){
    int n;
    printf("Qual o tamnaho do vetor?\n");
    scanf("%d", &n);
    int vetor[n];

    preenche_vetor(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nVetor oredenado pelo insertion sort:\n");

    insertion_sort(vetor, n);

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

/*void insertion_sort(int *v, int n){
    int i, j, aux; 
    for(i = 1; i < n; i++){
        j = i; 
        while (j > 0 && v[j-1] > v[j]){ 
            aux = v[j]; 
            v[j] = v[j-1]; 
            v[j-1] = aux; 
            j--; 
        } 
    } 
}*/

/*void insertion_sort(int *v, int n){
    int i, j, aux;
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

void insertion_sort(int *v, int n){
    int i, j, aux;
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

void insertion_sort(int *v, int n){
    int i , j , aux;
    for(i = 1; i < n; i++){
        j=1;
        while(j>0 && v[j-1] > v[j]){
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            j--;
        }
    }
}*/

void insertion_sort(int *v, int n){
    int i ,j ,aux;
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