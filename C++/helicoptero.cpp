//arrumar
#include <vector>
#include <iostream>

using namespace std;

int main(){

    int h,p,f,d;
    
    cin >> h >> p >> f >> d;

    int atual = f;

    while(true){
        if(atual == h){
            cout << "S" << endl;
            break;
        }
        if(atual == p){
            cout << "N" << endl;
            break;
        }

        if(d == 1){
            atual = (atual + 1)%16;
        }else{
            atual = (atual - 1 + 16)%16;
        }

    }

    return 0;
}
