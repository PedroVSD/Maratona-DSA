//Questão 5

//#include "biblioteca.h"

int verifica_linhas(int matriz[][3], int linhas, int colunas)
{
    int soma = 0;
    int i = 0;
    int vereficador = 0;
    while(i < linhas){
        for(int j = 0; j < colunas; j++){
           soma += matriz[i][j];
        }
        if(soma == 15){
            vereficador++;
        }
        soma = 0;
        i++;
    }
    if(vereficador == 3)
        return 1;
    else
        return 0;
}

int verifica_colunas(int matriz[][3], int linhas, int colunas)
{
    int soma = 0;
    int j = 0;
    int vereficador = 0;
    while(j < colunas){
        for(int i = 0; i < linhas; i++){
           soma += matriz[i][j];
        }
        if(soma == 15){
            vereficador++;
        }
        soma = 0;
        j++;
    }
    if(vereficador == 3)
        return 1;
    else
        return 0;
}

int verifica_diagonais(int matriz[][3], int linhas, int colunas)
{
    int soma = 0;
    int vereficador = 0;
    int j = 0;
    int i = 0;

    while(i < linhas && j < colunas){
        soma += matriz[i][j];
        i++;
        j++;
    }
    if(soma == 15){
        vereficador++;
    }

    j = colunas - 1;
    i = 0;

    soma = 0;
    while(i < linhas && j >= 0){
        soma += matriz[i][j];
        i++;
        j--;
    }

    if(soma == 15){
        vereficador++;
    }
    if(vereficador == 2){
        return 1;
    }
    else
        return 0;
}

int verifica_numeros_unicos(int matriz[][3], int linhas, int colunas)
{
    int diferente = 0;
    int diferente2 = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            for(int k = 0; k < linhas; k++){
                for (int l = 0; l < colunas; l++)
                {
                    if(matriz[i][j] != matriz[k][l]){
                        diferente++;
                    }
                }
            }
            if(diferente == 8){
                diferente2++;
            }
            diferente = 0;
        }
    }
    if(diferente2 == 9)
        return 1;
    else
        return 0;
}

int verifica_matriz(int matriz[][3], int linhas, int colunas)
{

    if(verifica_linhas(matriz, 3, 3) == 1  && verifica_colunas(matriz, 3, 3) == 1  && verifica_diagonais(matriz, 3, 3) == 1  && verifica_numeros_unicos(matriz, 3, 3) == 1 ){
        return 1;
    }
    else
        return 0;
}