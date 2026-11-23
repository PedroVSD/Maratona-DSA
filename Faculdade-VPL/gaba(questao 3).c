//Questão 3

#include<stdio.h>

int elemento(int i, int j);

int main(void)
{
    int i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        {
        for(j=0; j<=i; j++)
            printf("%d ", elemento(i, j));
        printf("\n");
        }   
    return 0;
}

int elemento(int i, int j)
    {
    if(j==0) return 1;
    else if(i == j) return 1;
    else return elemento(i-1, j-1) + elemento(i-1, j);
    }