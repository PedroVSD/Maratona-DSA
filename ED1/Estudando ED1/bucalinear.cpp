#include <iostream>
#include <cstdlib>
using namespace std;

int buscalinear(int *vetor, int flag);

int main(){

    int vetor[10];

    for(int i = 0; i<=10; i++){
        vetor[i] = rand()%10;
    }
    
    for(int i = 0; i<=10; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Qual a flag?" << endl;
    int flag;
    cin >> flag;

    int resp = buscalinear(vetor, flag);

    if(resp != -1){
        cout << "Flag encontrada: " << resp << endl;
    }

    return 0;
}

int buscalinear(int *vetor, int flag){
    for(int i = 0; i<=10; i++){
        if(vetor[i] == flag){
            return vetor[i];
        }
    }
    return -1;
}