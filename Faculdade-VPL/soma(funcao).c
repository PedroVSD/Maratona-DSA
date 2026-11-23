#include <stdio.h>
int soma(int a, int b);

int main(){
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    z=soma(x,y);
    printf("%d" ,z);
    return 0;
}

int soma(int a, int b){
    int c;
    c = a+b;
    return c;
}