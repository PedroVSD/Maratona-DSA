#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n ,q ,e ,d;
    cin >> n;

    int total = 0;

    vector<int> vetor(n);
    vector<int> soma(n);
    vector<int> saida(n);

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
        total += vetor[i];
        soma[i] = total;
    }

    cin >> q;

    for(int i = 0; i < q; i++){

        cin >> e >> d;
        if(e >= 0 && d >= 0){
            if(e == 0) {
                saida[i] = soma[d];
            } else {
                saida[i] = soma[d] - soma[e-1];
            }
        }
    }

    for (int i = 0; i < q; i++){
        cout<< saida[i] <<endl;
    }

    return 0;
}