#include <stdio.h>
#include <time.h>


void preenche_vetor(int *v, int n);
void bubble_sort(int *v, int n);
void quick_sort(int *v, int inicio, int fim);
void insertion_sort(int *v, int n);
int busca_binaria(int *v, int n, int flag);
int busca_sequencial(int *v, int n, int flag);

int main(){
    int n;
    int resposta;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &n);
    printf("---------------------------\n");

    int vetor[n];

    preenche_vetor(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }


    printf("\nQue tipo de busca deseja fazer? 1 - Binária ou 2 - Sequêncial?\n");
    scanf("%d", &resposta);

    printf("---------------------------\n");

    if(resposta == 1){
        printf("\nVamos fazer uma busca binária no vetor, ok?\n");
        int flag;
    
        printf("\nQual a flag?\n");
        scanf("%d", &flag);

        int buscab = busca_binaria(vetor, n, flag);

        printf("%d\n", buscab);

    } else if(resposta == 2){
        printf("\nVamos fazer uma busca sequêncial no vetor, ok?\n");
        int flag;
    
        printf("\nQual a flag?\n");
        scanf("%d", &flag);

        int buscal = busca_sequencial(vetor, n, flag);

        printf("%d\n", buscal);
    }

    printf("---------------------------\n");

    printf("\n\nVetor ordenado pelo bubble sort:\n\n");

    bubble_sort(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n---------------------------\n");

    printf("\n\nVetor ordenado pelo quick sort:\n\n");

    quick_sort(vetor, 0, n-1);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n---------------------------\n");

    printf("\n\nVetor ordenado pelo insertion sort:\n\n");

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

void bubble_sort(int *v, int n){
    int i, j, aux;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void quick_sort(int *v, int inicio, int fim){
    if(inicio < fim){

        int comeco = inicio+1;
        int final = fim;
        int pivo = (v[inicio]+v[fim]+v[(inicio+fim)/2])/3;

        while(comeco <= final){
            while(comeco <= final && v[comeco] <= pivo){
                comeco++;
            }
            while(v[final] > pivo){
                final--;
            }
            if(comeco <= final){
                int aux = v[comeco];
                v[comeco] = v[final];
                v[final] = aux;
                comeco++;
                final--;
            }
        }

        v[inicio]=v[final];
        v[final]=pivo;

        quick_sort(v, inicio, final-1);
        quick_sort(v, comeco, fim);
    }
}

void insertion_sort(int *v, int n){
    int i, j, aux;
    for(i = 1; i<n; i++){
        j = i;
        while (j > 0 && v[j-1] > v[j]){
         aux = v[j];
         v[j] = v[j-1];
         v[j-1] = aux;
         j--;   
        }
    }
}

int busca_binaria(int *v, int n, int flag){
    int inicio = 0, meio, fim = n-1;

    while(inicio <= fim){
        meio = (inicio+fim)/2;

        if(v[meio] == flag){
            return meio;
        } else if(v[meio] < flag){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return -1;
}

int busca_sequencial(int *v, int n, int flag){
    for(int i = 0; i <= n; i++){
        if(flag == v[i]){
            return v[i];
        }
    }
     return -1;
}