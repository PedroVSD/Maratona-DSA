#include <stdio.h>
int main(){
    int n, i;
    float nota1, nota2, nota3,soma_nota = 0;
    scanf("%d", &n);
    float media[n];
    for(i=0; i<n;i++){
        scanf("%f %f %f", &nota1, &nota2 ,&nota3);
        soma_nota = (nota1*2)+(nota2*3)+(nota3*5);
        media[i] = soma_nota/10;
    }
    for(i=0; i<n; i++){
        printf("%.1f\n", media[i]);
    }
    return 0;
}