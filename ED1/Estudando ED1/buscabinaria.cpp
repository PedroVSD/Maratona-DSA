#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int buscabinaria(int *vetor, int tamanho, int flag);


int main(){
    srand(time(0));

    std::vector<int> vetor(10);

    for(int i = 0; i<10; i++){
        vetor[i] = rand()%10;
    }
    
    for(int i = 0; i<10; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    std::sort(vetor.begin(), vetor.end());
    cout << endl;

    for(int i = 0; i<10; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;

    cout << "Qual a flag?" << endl;
    int flag;
    cin >> flag;

    int resp = buscabinaria(vetor.data(), vetor.size(), flag);
    if(resp != -1){
        cout << "Flag encontrada: " << resp << endl;
    }

    return 0;
}

int buscabinaria(int *vetor, int tamanho, int flag){
    int inicio = 0;
    int fim = tamanho - 1;
    

    while(inicio <= fim){
        int meio = (inicio + fim)/2;
        if(vetor[meio] == flag){
            return meio;
        }else if(flag < vetor[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    return -1;
}