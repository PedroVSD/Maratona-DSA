//Questaõ 2

#include<stdio.h>

void conversao(int n, int b);

int main()
    {
    int n, b;
    scanf("%d %d", &n, &b);
    conversao(n, b);
    return 0;
    }
    
    
void conversao(int n, int b)
    {
    int r;
    r = n % b;
    if(n >= b)
        conversao(n/b, b);
    
    if(r<=9)
        printf("%d", r);
    else
        printf("%c", 'A'+r-10);
    }