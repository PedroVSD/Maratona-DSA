#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &vetor[i]);
            for(int j =0; j < i; j++){
                if(vetor[j] == vetor[i]){
                    printf("Digite um valor diferente: \n");
                    vetor[i] = 0;
                    i--;
                }
            }
    }
    for(int i = 0; i<n; i++){
            printf("%d ", vetor[i]);
        }
    return 0;
}