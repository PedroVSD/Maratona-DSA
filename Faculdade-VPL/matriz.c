#include <stdio.h>
void preencheMatriz(int matriz[][3]);
void escreveMatriz(int matriz[][3]);
int verifica_linhas(int matriz[][3], int linhas, int colunas);
int verifica_colunas(int matriz[][3], int linhas, int colunas);
int verificar_diagonais(int matriz[][3], int linhas, int colunas);
int verificar_numeros_unicos(int matriz [][3], int linhas, int colunas);
int verificar_matriz(int matriz[][3], int linhas, int colunas);
int main(){
    printf("Os elementos da matriz precisam ser entre 0 e 9\n\n");
    int matriz[3][3];
    preencheMatriz(matriz);
    escreveMatriz(matriz);
    printf("Verificando a soma das linhas\n");
    int somaLinha = verifica_linhas(matriz, 3, 3);
    printf("%d\n", somaLinha);
    int somaColuna = verifica_colunas(matriz, 3, 3);
    printf("%d\n", somaColuna);
    int somaDiagonal = verificar_diagonais(matriz, 3, 3);
    printf("%d\n", somaDiagonal);
    int verificarNumeros = verificar_numeros_unicos(matriz, 3, 3);
    printf("%d\n", verificarNumeros);
    int verificarMatriz = verificar_matriz(matriz, 3, 3);
    printf("%d\n", verificarMatriz);
    return 0;
}

void preencheMatriz(int matriz[][3]){
    for (int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3;coluna++){
            printf("Posicao [%d][%d]", linha ,coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

void escreveMatriz(int matriz[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verifica_linhas(int matriz[][3], int linhas, int colunas){
    for(int i = 0; i < 3; i++){
        int somaLinha = 0;
        for(int j = 0; j < 3; j++){
            somaLinha += matriz[i][j];
        }
        if(somaLinha == 15){
            return 1;
        } else{
            return 0;
        }
    }
}

int verifica_colunas(int matriz[][3], int linhas, int colunas){
    for(int i = 0; i < 3; i++){
        int somaColuna = 0;
        for(int j = 0; j < 3; j++){
            somaColuna += matriz[i][j];
        }
        if(somaColuna == 15){
            return 1;
        } else{
            return 0;
        }
    }
}

int verificar_diagonais(int matriz[][3], int linhas, int colunas){
    int somaDiagonal = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if (i == j){
                somaDiagonal += matriz[i][j];
            }
        }
    }
    if(somaDiagonal == 15){
        return 1;
    }
    return 0;
}

int verificar_numeros_unicos(int matriz [][3], int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i]==matriz[j]){
                return 1;
            } return 0;
        }
    }
}

int verificar_matriz(int matriz[][3], int linhas, int colunas){

}