#include <stdio.h>

//int antes(int num);
//void depois(int num);
void le_vetor(int *vet, int n);
void soma_vetor(int *vet, int n);

int main(){
    /*int num = 10;
    int *p = &num;

    printf("%d", &p);
    printf("\n%d", p);
    printf("\n%d", num);

    *p = 20;
    printf("\n%d", num);
    int a;
    printf("Digite um número\n");
    scanf("%d", &a);

    int b = antes(a);
    printf("%d", b);

    depois(a);*/
    int tamanho;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    le_vetor(vetor, tamanho);
    soma_vetor(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

void le_vetor(int *vet, int n){
    for(int i = 0; i < n; i++){
        printf("Qual o número da %dº posição do vetor?\n", i+1);
        scanf("%d", &vet[i]);
    }
}

void soma_vetor(int *vet, int n){
    for (int i = 0; i < n; i++){
        vet[i] = vet[i]+1;
    }
    
}

/*int antes(num){
    int resp = num-1;
    return resp;
}

void depois(num){
    int resp = num+1;
    printf("\n%d", resp);
}*/