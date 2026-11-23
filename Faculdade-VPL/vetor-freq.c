#include<stdio.h>
void main(){

    int tam, aux;
    printf("Tamanho do vetor?\n");
    scanf("%d", &tam);
    int vet[tam];

    printf("Preencha o vetor com numeros inteiros:\n");
    for(int i = 0; i <= tam; i++){
        scanf("%d\n", &vet[i]);
    }

    printf("Numeros repetidos:\n");
    for(int i = 0; i <= tam; i++){
        aux = 0;
        for(int j = i-1; j >= 0; j--){
            if(vet[i] == vet[j]){
                aux = 1;
            }
        }
        if(aux == 1){
            printf("%d \n", vet[i]);
        }
    }
}