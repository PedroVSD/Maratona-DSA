#include <iostream>
#include <string>

using namespace std;

int main(void){

    string s;
    string vogais;
    string consoantes;

    cin >> s;

    int tam = s.size();

    for(int i = 0; i < tam; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vogais += s[i];
        }else{
            consoantes += s[i];
        }
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;

}