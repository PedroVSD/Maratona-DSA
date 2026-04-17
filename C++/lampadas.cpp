//I1 acende A e I2 troca o estado as duas

#include <stdio.h>

int main(){

    int interruptor, n;
    int A = 0, B = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &interruptor);
        if(interruptor == 1){
            A = !A;
    }else if(interruptor == 2){
       A = !A;
       B = !B;
    }
    }
    printf("%d\n%d\n", A, B);
    return 0;
}