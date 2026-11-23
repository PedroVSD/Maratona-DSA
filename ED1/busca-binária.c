#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_vetor(int *v, int n);
int busca_binaria(int *v, int n, int flag);
int bolha(int *v, int n);

void preenche_vetor(int *v, int n) {
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

int main(){
    printf("Qual o tamanho do vetor?\n");
    int n;
    scanf("%d", &n);
    int v[n];
    preenche_vetor(v, n);
    bolha(v, n);

    printf("Qual a flag?\n");
    int flag;
    scanf("%d", &flag);
    int resp = busca_binaria(v, n, flag);

    //printf("%d\n", resp);

    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    return 0;
}

int bolha(int *v, int n){
    int aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int busca_binaria(int *v, int n, int flag) {
    int inicio = 0, fim = n-1, meio;
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (flag == v[meio]) {
            return meio;
        } else if (flag < v[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return printf("Não encontrado\n");
}

int busca_binaria_recursiva(int *v, int inicio, int fim, int flag) {
    if (inicio > fim) {
        return printf("Não encontrado\n");
    }
    int meio = (inicio + fim) / 2;
    if (flag == v[meio]) {
        return meio;
    } else if (flag < v[meio]) {
        return busca_binaria_recursiva(v, inicio, meio - 1, flag);
    } else {
        return busca_binaria_recursiva(v, meio + 1, fim, flag);
    }
}



/*int busca_binaria(int *v, int n, int flag){
    int inicio = 0, fim = n-1, meio;
    while(inicio <= fim){
        meio = (inicio+fim)/2;
        if(flag == v[meio]){
            return meio;
        } else if(inicio < v[meio]){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
        return printf("Não encontrado\n");
    }
    
}

int busca_binaria(int *v, int n, int flag){
    int inicio = 0, fim = n-1, meio;
    while(inicio <= fim){
        meio = (inicio+fim)/2;
            if(flag == v[meio]){
                return meio;
            }else if(inicio < v[meio]){
                fim = meio - 1;
            }else{
                inicio = meio + 1;
            }
        }
    return printf("Não encontrado\n");
}*/

int busca_binaria(int *v, int n, int flag){
    int inicio = 0, meio, fim = n-1;

    while(inicio <= fim){
        meio = (inicio+fim)/2;

        if(flag == v[meio]){
            return meio;
        }else if(inicio < v[fim]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }

    return printf("Não encontrado\n");
}

int busca_binaria(int *v, int n, int flag){
    int inicio = 0, meio, fim;

    while(inicio <= fim){
        meio=(inicio+fim)/2;

        if(flag == meio){
            return meio;
        }else if(inicio < v[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    return printf("Não encontrado\n");
}

int bolha(int *v, int n){
    int i, j, aux;

    for(i = 0; i <= n; i++){
        for(j = 0; j <= n-1; j++){
            if(v[j] > v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
            }
        }
    }
}