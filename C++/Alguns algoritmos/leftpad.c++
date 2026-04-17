#include <iostream>

using namespace std;

string leftPad(string nome, int qnt_espaco);

int main(void){

    string nome = "Pedro";

    cout << "Qual o tamanho desejado?" << endl;

    int qnt_espaco;
    cin >> qnt_espaco;

    string nome_novo = leftPad(nome, qnt_espaco);

    cout << nome_novo << endl;
    cout << nome_novo.size();
}

string leftPad(string nome, int qnt_espaco){
    string nome_novo = nome;
    string espaco = " ";
    
    if(nome.length() >= qnt_espaco){
        return nome;
    }

    for(int i = 0; i < qnt_espaco - nome.size(); i++){
        nome_novo = espaco + nome_novo;
    }

    return nome_novo;
}