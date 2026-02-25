#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    char gaba[n];
    for(int i = 0; i < n; i++){
        cin >> gaba[i];
    }

    char resp[n];
    
    for (int i = 0; i < n ; i++){
        cin >> resp[i];
    }

    int acertos = 0;

    for (int i = 0; i < n; i++){
        if (gaba[i] == resp[i]){
            acertos++;
        }
    }

    cout << acertos << endl;
    return 0;
}