//Questão 4

//#include "biblioteca.h"


void soma(int dim, int M1[dim][dim], int M2[dim][dim], int R[dim][dim])
    {
    int i, j;
    for(i=0; i<dim; i++)
        for(j=0; j<dim; j++)
            R[i][j] = M1[i][j] + M2[i][j];
    }
    
void multiplicacao(int dim, int M1[dim][dim], int M2[dim][dim], int R[dim][dim])
    {
    int i, j, k;
    for(i=0; i<dim; i++)
        for(j=0; j<dim; j++)
            for(k=0; k<dim; k++)
                R[i][j] = R[i][j] + M1[i][k] * M2[k][j];
        
    }