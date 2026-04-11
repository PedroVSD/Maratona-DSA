#include <iostream>

using namespace std;

int main(void){
    int n, ponto = 1, maior = 1;
    cin >> n;

    int vetor[n];

    for(auto &i: vetor){
        cin >> i;
    }

    for(int i = 1; i < n; i++){
        if(vetor[i] == vetor[i-1]){
            ponto++;
        }else{
            ponto = 1;
        }
        if(ponto > maior){
            maior = ponto;
        }
    }

    cout << maior << endl;
}