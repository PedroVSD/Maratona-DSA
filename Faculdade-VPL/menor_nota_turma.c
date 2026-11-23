#include <stdio.h>
int main(){
    int n, i, menor_nota, pos_nota = 0, pos_menor = 1;
    scanf("%d", &n);
    int notas[n];
    
       for(i=0; i<n; i++){
        scanf("%d", &notas[i]);
         if(notas[i]>=0 && notas[i]<=10){
            if(notas[i] < menor_nota || i==0){
                menor_nota = notas[i];
                pos_menor = i;
            }  
        }
    }
    printf("%d",menor_nota);
    return 0;
}