#include <iostream>
using namespace std;

int main(){
    int l, c;
    std::cin >> l >> c;

    //Pode substituir todo o código abaixo por:
    //cout << ((l % 2 == c % 2) ? "1" : "0") << endl;


    if(l%2 == 0 && c%2 == 0){
        cout << "1" << endl;
    }else if(l%2 == 0 && c%2 != 0){
        cout << "0" << endl;
    }else if(l%2 != 0 && c%2 == 0){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }
    return 0;
}