#include <stdio.h>

int testa_PA(int n, int* v);

int main(){

    printf("Digite o tamanho do vetor: ");
    int n;
    scanf("%d", &n);
    int v[n];
    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int res = testa_PA(n, v);
    if(res == 1){
        printf("É uma PA\n"); 
    }
    return 0;
}

int testa_PA(int n, int* v){
    int r = v[1] - v[0];
    for(int i = 0; i < n; i++){
        if(v[i] - v[i-1] == r){
            return r;
        }
    }
    return 0;
}