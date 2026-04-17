#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    string expressao;
    stack<char> pilha;

    cin >> expressao;

    for (char c : expressao){
        if (c == '(' || c == '[' || c == '{'){
            pilha.push(c);
        } else if (c == ')' || c == ']' || c == '}'){
            if (pilha.empty()){
                cout << "N" << endl;
                return 0;
            }
            pilha.pop();
        }
    }

    if (pilha.empty()){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}