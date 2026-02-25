#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(void) {

    string Texto, vogais;
    bool palindrono = true;
    int posicaoReversa = 0;

    cin >> Texto;


    for (char c : Texto) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais += c;
        }
    }

    /*for (int i = vogais.length() - 1; i > 0; i--) {
        posicaoReversa = vogais.length() - i - 1; 

        if (vogais.substr(i, 1) != vogais.substr(posicaoReversa, 1)) {
            palindrono = false;
            break;
        }
    }*/

   string invertida = vogais;
   reverse(invertida.begin(), invertida.end());

    //cout << endl << (palindrono ? "S" : "N");
    cout << endl<< (vogais == invertida ? "S" : "N");
}