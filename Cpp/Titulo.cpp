#include <iostream>
#include <string>

using namespace std;

string title(string F){
    
    for(size_t i = 0; i < F.length(); i++){
        if(F[i-1] == ' ' && F[i] != ' '){
           F[i] = toupper(F[i]);
        } else {
            F[i] = tolower(F[i]);
        }
    }

    if (!F.empty()) {
        F[0] = toupper(F[0]);
    }

    return F;
}

int main(void){
    string a;

    getline(cin, a);
    a = title(a);

    cout << a << endl;
}