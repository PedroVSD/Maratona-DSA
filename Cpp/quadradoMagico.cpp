//Feito, porém tentar otimizar.

#include <iostream>

using namespace std;

int somalinha(int n, int **quadromagico);
int somacoluna(int n, int **quadromagico);
int somadiagonal(int n, int **quadromagico);
int verificavalor(int somaLinha, int somaColuna, int somaDiagonal);


int main(){

    int n;
    cin >> n;

    // Alocação dinâmica do array
    int **quadromagico = new int*[n];
    for (int i = 0; i < n; i++) {
        quadromagico[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> quadromagico[i][j];
        }
    }

    int somaLinha = somalinha(n, quadromagico);
    int somaColuna = somacoluna(n, quadromagico);
    int somaDiagonal = somadiagonal(n, quadromagico);

    int valor = verificavalor(somaLinha, somaColuna, somaDiagonal);
    cout << valor <<endl;

    /*for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cout << quadromagico[i][j] << " ";
        }
        cout << endl;
    }*/

    for (int i = 0; i < n; i++) {
        delete[] quadromagico[i];
    }
    delete[] quadromagico;

    return 0;
}


int somalinha(int n, int **quadromagico){
    int somalinha = 0;
    for (int i = 0; i < n; i++){
        somalinha = 0;
        for (int j = 0; j < n; j++){
            somalinha += quadromagico[i][j];
        }
    }
    return somalinha;
}

int somacoluna(int n, int **quadrado){
    int somacoluna = 0;
    for (int i = 0; i < n; i++){
        somacoluna = 0;
        for (int j = 0; j < n; j++){
            somacoluna += quadrado[j][i];
        }
    }
    return somacoluna;
}

int somadiagonal(int n, int **quadrado){
    int somadiagonalp = 0;
    int somadiagonals = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                somadiagonalp += quadrado[i][j];
                somadiagonals += quadrado[i][n-1-i];
            }
        }
    }
    if (somadiagonalp == somadiagonals){
        return somadiagonalp;
    }
    return -1;
}

int verificavalor(int somaLinha, int somaColuna, int somaDiagonal){
    if (somaLinha == somaColuna && somaLinha == somaDiagonal){
        return somaLinha;
    } else {
        return -1;
    }
}