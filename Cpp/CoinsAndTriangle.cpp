#include <iostream>

using namespace std;


int triangulo();

int main(void){
    int n, t,linhas = 0, moedas = 0;

    while(t--){
        cin >> n;

    while (moedas+linhas <= n){
        linhas++;
        moedas += linhas;
    }

    cout << linhas << endl;
    } 
}

int triangulo(){
    
}