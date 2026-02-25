#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){

    int n = 10;

    vector<int> v(n);
    vector<int> acumulado(n);

    int e,d;

    cin >> e >> d;

    for(int i = 0; i<10; i++){
        v[i] = rand()%10;
    }

    for(int i = 0; i<10; i++){
        cout << v[i] << " ";
    }

    cout << endl;

    acumulado[0] = v[0];
    for(int i = 1; i < n; i++){
        acumulado[i] = acumulado[i-1] + v[i];
    }

    for(int i = 0; i<10; i++){
        cout << acumulado[i] << " ";
    }
    cout << endl;

    if (e > 0 && d > 0 && e <= n && d <= n && e <= d) {
        int resultado = acumulado[d - 1] - (e > 1 ? acumulado[e - 2] : 0);
        cout << "Soma no intervalo [" << e << ", " << d << "]: " << resultado << endl;
    } else {
        cout << "Intervalo inválido!" << endl;
    }

    return 0;
}