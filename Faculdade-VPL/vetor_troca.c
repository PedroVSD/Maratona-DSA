#include <stdio.h>
#include <string.h>

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho], vetor_invertido[tamanho];
    for(int i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<tamanho; i++){
        vetor_invertido[i] = vetor[tamanho-i-1];
        printf("%d ", vetor_invertido[i]);
    }
    return 0;
}