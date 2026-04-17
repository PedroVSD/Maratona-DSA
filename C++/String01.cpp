#include <iostream>
#include <string>
using namespace std;

int main(){

    int casos, contador = 0;

    cin >> casos;

    string s;

    for(int i = 0; i < casos; i++){
        cin >> s;
        if(s.data()[0] == 1){
            contador++;
        }
    }

    
    cout << contador << endl;
    
    return 0;
}