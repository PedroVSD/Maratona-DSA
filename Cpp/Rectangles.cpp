#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int contarSubconjuntosLinha(const vector<vector<int>>& matrix, int n, int m, int cor);
int contarSubconjuntosColuna(const vector<vector<int>>& matrix, int n, int m, int cor);

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int subconjuntosPretos = contarSubconjuntosLinha(matrix, n, m, 1) + contarSubconjuntosColuna(matrix, n, m, 1);
    int subconjuntosBrancos = contarSubconjuntosLinha(matrix, n, m, 0) + contarSubconjuntosColuna(matrix, n, m, 0);

    cout << subconjuntosPretos + subconjuntosBrancos << endl;

    return 0;
}

int contarSubconjuntosLinha(const vector<vector<int>>& matrix, int n, int m, int cor) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        int contador = 0;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == cor) {
                contador++;
            } else {
                if (contador > 0) {
                    total += (1 << contador) - 1; 
                    contador = 0;
                }
            }
        }
        if (contador > 0) {
            total += (1 << contador) - 1;
        }
    }
    return total;
}

int contarSubconjuntosColuna(const vector<vector<int>>& matrix, int n, int m, int cor) {
    int total = 0;
    for (int j = 0; j < m; j++) {
        int contador = 0;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == cor) {
                contador++;
            } else {
                if (contador > 0) {
                    total += (1 << contador) - 1;
                    contador = 0;
                }
            }
        }
        if (contador > 0) {
            total += (1 << contador) - 1;
        }
    }
    return total;
}