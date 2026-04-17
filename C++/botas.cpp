#include <iostream>
#include <stack>

using namespace std;

int verificapar(int direita, int esquerda);

struct botas{
    int numero;
    char pe;
};


int main(){

    int n;
    int peD = 0, peE = 0;
    cin >> n;

    stack<botas> pilha;

    for(int i = 0; i < n; i++){
        char lado;
        int tam;
        
        cin >> tam >> lado;

        if(lado == 'D'){
            pilha.push({tam ,'D'});
            peD++;
        }else{
            pilha.push({tam ,'E'});
            peE++;
        }
        if(peD==peE){

        }
    }

    int resp = verificapar(peD, peE);
    cout << resp << endl;

    return 0;
}

/*int verificapar(int direita, int esquerda){

    int par = 0;

    if(direita == esquerda){
        par++;
        return par;
    }else{
        return -1;
    }
}*/