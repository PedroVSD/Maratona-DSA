//Questão 1
#include<stdio.h>
//#include "biblioteca.h"

void crescente(int n)
    {

    if(n > 1)    
        crescente(n-1);

    printf("%d ", n);
    //return ;
    }
    
void decrescente(int n)
    {
    printf("%d ", n);

    if(n > 1)
        decrescente(n-1);
    //return ;
    }