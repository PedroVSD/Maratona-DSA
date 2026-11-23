#include <stdio.h>
int main(){
    int n[5], i, maior=0, maior_posicao;
    for(i=0; i<5; i++){
        scanf("%d", &n[i]);
    if(n[i]>maior){
        maior = n[i];
        maior_posicao = i +1;
        }
    }
        printf("%d\n%d", maior, maior_posicao);
    return 0;
}