#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void colorirFita(int n, vector<int>& fita) {
    queue<int> fila;
    vector<int> resultado(n, -1);
    
    // Adiciona os índices dos quadrados já coloridos com tom 0 à fila
    for (int i = 0; i < n; i++) {
        if (fita[i] == 0) {
            fila.push(i);
            resultado[i] = 0;
        }
    }
    
    // Realiza a BFS para colorir os quadrados
    while (!fila.empty()) {
        int i = fila.front();
        fila.pop();
        
        for (int direcao : {-1, 1}) { // Verifica os vizinhos à esquerda e à direita
            int novo_i = i + direcao;
            if (novo_i >= 0 && novo_i < n && resultado[novo_i] == -1) { // Se ainda não foi colorido
                resultado[novo_i] = min(resultado[i] + 1, 9); // Define o tom adequado
                fila.push(novo_i);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> fita(n);
    
    for (int i = 0; i < n; i++) {
        cin >> fita[i];
    }
    
    colorirFita(n, fita);
    
    return 0;
}