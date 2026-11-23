#include<stdio.h>
#include<stdlib.h>


int main(){
    int b, n;
    printf("Qual o tamamho do vetor?\n");
    scanf("%d", &n);
    int vetor[n];

    int *x = &b;
    printf("Endereço de b %d", *x);
    *x = &b-1;
    printf("\nEndereço de b %d", *x);

    b = (int*) malloc(n*sizeof(int));

    
    free(b);

    return 0;
}