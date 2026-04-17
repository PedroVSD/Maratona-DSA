#include <iostream>
#include <vector>

using namespace std;

int verificaMaiorPeso(const std::vector<std::vector<int>>& matrix, const std::vector<int>& somaLinha, const std::vector<int>& somaColuna, int n);

int main() {
    int n;
    
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    std::vector<int> somaLinha(n, 0), somaColuna(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            somaLinha[i] += matrix[i][j];
            somaColuna[j] += matrix[i][j];
        }
    }

    int peso = verificaMaiorPeso(matrix, somaLinha, somaColuna, n);
    cout << peso << endl;

    return 0;
}

int verificaMaiorPeso(const std::vector<std::vector<int>>& matrix, const std::vector<int>& somaLinha, const std::vector<int>& somaColuna, int n){
    int MaiorPeso = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            int peso = somaLinha[i] + somaColuna[j] - 2 * matrix[i][j];
            MaiorPeso = std::max(MaiorPeso, peso);
        }
    }

    return MaiorPeso;
}