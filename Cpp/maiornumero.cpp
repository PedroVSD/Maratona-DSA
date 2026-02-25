#include<stdio.h>

int main(){

    int sequencia[100];
    int i = 0;
    int maior;

    scanf("%d", &sequencia[i]);
    maior = sequencia[0];

    while(sequencia[i] != 0){
        i++;
        scanf("%d", &sequencia[i]);

        if(sequencia[i] > maior){
            maior = sequencia[i];
        }
    }
    printf("%d\n", maior);

    return 0;
}