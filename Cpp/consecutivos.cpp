#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, pontos = 1, max_pontos = 1;

    cin >> n;
    vector<int> valores(n);


    for(int i = 0; i < n; i++){
        cin >> valores[i];
    }

    for(int i = 1; i < n; i++){
        if(valores[i] == valores[i-1]){
            pontos++;
        } else {
            max_pontos = max(pontos, max_pontos);
            pontos = 1;
        }
    }
    cout << max_pontos<< endl;
}