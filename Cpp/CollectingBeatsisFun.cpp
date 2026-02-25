#include <iostream>

using namespace std;

int main(){

    char tabuleiro[4][4];
    int k;
    cin >> k;

    int contador[10] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){

            cin >> tabuleiro[i][j];

            if(tabuleiro[i][j] != '.'){
                int num = tabuleiro[i][j] - '0';
                contador[num]++;
            }
            
        }
    }

    for(int i = 0; i <= 9; i++){
        if(contador[i] > 2*k){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}