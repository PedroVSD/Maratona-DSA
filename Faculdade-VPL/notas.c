#include <stdio.h>
int main(){
    float notas[10];
    int i, n;
    printf("Quantas notas? \n");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++){
        printf("Digite a %d nota: \n", i+1);
        scanf("%f", &notas[i]);
    }
    for (i = 0; i<n; i++){
    printf("Nota %d : %.1f\n", i+1, notas[i]);
    }
    return 0;
}