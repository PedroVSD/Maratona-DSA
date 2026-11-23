#include <stdio.h>
int soma_vetor(int soma[], int i);
int main(){

    int n, tam;

    printf("Quantas casos?\n");
    scanf("%d", &n);
    printf("Tamanho do vetor?\n");
    scanf("%d", &tam);

    int vetor[tam]; 
    
    for(int i =0; i <= n; i++){
        scanf("%d", &vetor[i]);
        soma_vetor(vetor[i]);
    }
}

int soma_vetor(int soma[], int i){
    int i = 0;
    int resp = soma_vetor(soma_vetor(i)+1);
    return resp;
}