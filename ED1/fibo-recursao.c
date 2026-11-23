#include <stdio.h>

int fibo(int n);
int main(){
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Fibonacci de %d = %d\n", n, fibo(n));

    return 0;
}

int fibo(int n){
    if (n<=1){
        return n;
    } else{
        return fibo(n-1) + fibo(n-2);
    }
}