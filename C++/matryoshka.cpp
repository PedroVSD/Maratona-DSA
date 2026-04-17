#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> bonecas(n);

    for(int i = 0; i < n; i++){
        int value;
        cin >> bonecas[i];
    }

    vector<int> bonecas_foraordem = bonecas;
    vector<int> trocas;

    sort(bonecas.begin(), bonecas.end());

    int qnttrocas = 0;
    for(int i = 0; i < n; i++){
        if(bonecas[i] != bonecas_foraordem[i]){
            trocas.push_back(bonecas[i]);
            qnttrocas++;
        }
    }

    cout << qnttrocas << endl;
    for (int i = 0; i < trocas.size(); i++) {
        cout << trocas[i] << " ";
    }
}