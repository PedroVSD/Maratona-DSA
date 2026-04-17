#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n,x,y,z;
    int contador = 0;

    cin >> n >> x >> y >> z;

    int menor = min({x,y,z});
    int maior = max({x,y,z});
    int meio = (x+y+z)-menor-maior;


    if(n >= menor){
        contador++;
        n -= menor;
    }
    

    if(n >= meio){
        contador++;
        n -= meio;
    }
    

    if(n >= maior){
        contador++;
        n -= maior;
    }
    

    cout << contador;
}