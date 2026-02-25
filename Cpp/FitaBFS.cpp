#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<int> fila, int n);

int main(void){
    int n;
    cin >> n;
    vector<int> fita(n);

    for(int i = 0; i < n; i++){
        cin >> fita[i];
    }

    bfs(fita, n);
}


void bfs(vector<int> fita, int n){
    queue<int> fila;
    vector<int> resp(n, -1);

    for(int i = 0; i < n; i++){
        if(fita[i] == 0){
            fila.push(i);
            resp[i] = 0;
        }
    }


    while(!fila.empty()){
        int i = fila.front();
        fila.pop();

        for(int direcao : {-1, 1}){
            int j = i + direcao;
            if(j >= 0 && j < n && resp[j] == -1){
                resp[j] = min(resp[i]+1, 9);
                fila.push(j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << resp[i] << " ";
    }
    cout << endl;
}