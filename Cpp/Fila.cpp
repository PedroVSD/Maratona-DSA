#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int main(void){

    //queue<int> fila;
    vector<int> fila;
    
    int qnt;
    cin >> qnt;

    for(int i = 0; i < qnt; i++){
        int n;
        cin >> n;
        fila.push_back(n);
    }

    /*int tamVetor = fila.size();

    vector<bool> saida(tamVetor);

    for(int i = 0; i < qnt; i++){
        saida[i] = true;
    }

    saida.resize(qnt, true);*/
    

    set<int> proximo;

    int qntSai;
    cin >> qntSai;
    

    for(int i = 0 ; i < qntSai; i++){

        int m;
        cin >> m;

        proximo.insert(m);

        /*int tamanhoFila = fila.size();

        for(int j = 0; j < tamanhoFila; j++){
            int primeiro = fila.front();

            if(primeiro == m){
                fila.pop();
                //saida[j] = false;
                break;
            }

        fila.push(primeiro);
        fila.pop();

        }*/
    }

    int marcar = 0;
    for(int i = 0 ; i < qnt; i++){
        if(proximo.find(fila[i]) == proximo.end()){    
            if(marcar++ > 0){
                cout << " ";
            }
            cout << fila[i];
        }
    }

    /*while (!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop();
    }*/

}