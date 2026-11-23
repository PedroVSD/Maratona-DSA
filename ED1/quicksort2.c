#include <stdio.h>

int preenchevetor(int *vetor, int n);
int medianatres(int *vetor, int inicio, int meio, int fim);
void quick_sort(int *vetor, int inicio, int fim);

int main(){
    int n;

    printf("Tamanho do vetor?\n");
    scanf("%d", &n);
    int vetor[n];

    int vet = preenchevetor(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    quick_sort(vetor, 0, n-1);

    printf("\nVetor ordenado\n");

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}

int preenchevetor(int *vetor, int n){
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }
}

/*void quick_sort(int *vetor, int inicio, int fim){
    if(inicio < fim){

        int pivo = vetor[inicio];
        int start = inicio + 1;
        int end = fim;

        do {
            while(start <= end && vetor[start]<=pivo){
                start++;
            }
            while(vetor[end] > pivo){
                end--;
            }
            if(start <= end){
                int temp = vetor[start];
                vetor[start] = vetor[end];
                vetor[end] = temp;
                start++;
                end--;
            }
        }while(start<=end);

        vetor[inicio]=vetor[end];
        vetor[end]=pivo;

        quick_sort(vetor, inicio, end-1);
        quick_sort(vetor, start, fim);
    }
}*/

int medianatres(int *vetor, int inicio, int meio, int fim){
    int start = vetor[inicio];
    int middle = vetor[meio];
    int end = vetor[fim];

    if((start > middle) != (start > fim)){
        return inicio;
    }else if((middle > start) != (middle > end)){
        return meio;
    }else{
        return fim;
    }
}

/*void quick_sort(int *vetor, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;

        // Escolhe o índice da mediana de três
        int indice_pivo = mediana_de_tres(vetor, inicio, meio, fim);
        int pivo = vetor[indice_pivo];

        // Coloca o pivô no início
        troca(&vetor[inicio], &vetor[indice_pivo]);

        int i = inicio + 1;
        int j = fim;

        while (i <= j) {
            while (i <= j && vetor[i] <= pivo) i++;
            while (i <= j && vetor[j] > pivo) j--;

            if (i < j) {
                troca(&vetor[i], &vetor[j]);
                i++;
                j--;
            }
        }

        // Coloca o pivô na posição correta
        troca(&vetor[inicio], &vetor[j]);

        // Recursão
        quick_sort(vetor, inicio, j - 1);
        quick_sort(vetor, j + 1, fim);
    }
}*/


void quick_sort(int *vetor, int inicio, int fim){
    if(inicio < fim){

        int pivo = (vetor[inicio]+vetor[fim]+vetor[(inicio+fim)/2])/3;
        int start = inicio + 1;
        int end = fim;

        while(start<=end){
            while(start <= end && vetor[start]<=pivo){
                start++;
            }
            while(vetor[end] > pivo){
                end--;
            }
            if(start <= end){
                int temp = vetor[start];
                vetor[start] = vetor[end];
                vetor[end] = temp;
                start++;
                end--;
            }

        }
        vetor[inicio]=vetor[end];
        vetor[end]=pivo;

        quick_sort(vetor, inicio, end-1);
        quick_sort(vetor, start, fim);
    }
}

/*void quick_sort(int *vetor, int inicio, int fim){

    if(inicio < fim){

        int pivo = (vetor[inicio]+vetor[fim]+vetor[(inicio+fim)/2])/3;
        int comeco = inicio + 1;
        int final = fim;

        while(comeco <= final && vetor[inicio] < pivo){
            comeco++;
        }
        while(vetor[final] > pivo){
            final--;
        }
        if(comeco<=final){
            int aux = vetor[comeco];
            vetor[comeco] = vetor[final];
            vetor[final] = aux;
            comeco++;
            final--;
        }

        vetor[inicio] = vetor[final];
        vetor[final] = pivo;

        quick_sort(vetor, inicio, final-1);
        quick_sort(vetor, comeco, fim);
    }  
}*/


/*void quick_sort(int *vetor, int inicio, int fim){

    if(inicio < fim){

        int pivo = (vetor[inicio]+vetor[fim]+vetor[(inicio+fim)/2])/3;
        int comeco = inicio;
        int final = fim;

            while(comeco <= final && vetor[comeco] < pivo){
                comeco++;
            }  

            while(vetor[final] > pivo){
                final--;
            }

            if(comeco <= final){
                int aux = vetor[comeco];
                vetor[comeco] = vetor[final];
                vetor[final] = aux;
                inicio++;
                fim--;
            }

            vetor[inicio] = vetor[final];
            vetor[final] = pivo;

            quick_sort(vetor, inicio, final-1);
            quick_sort(vetor, comeco, fim);
        
    }
}*/