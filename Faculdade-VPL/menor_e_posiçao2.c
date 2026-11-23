#include <stdio.h>
int main(){
    int n, i,menor, pos_menor;
    scanf("%d", &n);
    int elemento[n];
    for(i=0 ; i<n ; i++){
        scanf("%d", &elemento[i]);
            if(elemento[i] < menor | i==0){
                menor = elemento[i];
                pos_menor = i;
            }
    }
    printf("Menor valor: %d\nPosicao: %d", menor, pos_menor);
}