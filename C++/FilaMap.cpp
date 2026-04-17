#include <iostream>
#include <map>

using namespace std;

int main(void){
    map <int, bool> fila;

    int qnt;
    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        int n;
        cin >> n;
        fila[n] = true;
    }

    int qntSai;
    cin >> qntSai;

    for(int i = 0; i < qntSai; i++){
        int m;
        cin >> m;
        fila[m] = false;
    }

    for(auto i : fila){
        if(i.second == true){
            cout << i.first << " ";
        }
    }

    cout << endl;
}