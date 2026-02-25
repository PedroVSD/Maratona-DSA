#include<stdio.h>

int soma(n1, n2);

int main(){
    
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    printf("%d\n", soma(n1, n2));

    return 0;
}

int soma(n1, n2){
    return n1 + n2;
}