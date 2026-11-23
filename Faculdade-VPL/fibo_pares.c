#include <stdio.h>
int main(){
    int n, a = 0, b = 1, i, x=0, soma=0;
    scanf("%d", &n);
    for(i = 0 ; x < n ; i++){
        if(x%2==0){
            soma += x;
        }
        x = a+b;
        a = b;
        b = x; 
    }
    printf("%d", soma);
    return 0;
}