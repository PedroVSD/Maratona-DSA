#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> cores(4);

    for(int i = 0; i < cores.size(); i++){
        cin >> cores[i];
    }

    if(cores[0] == cores[2] || cores[1] == cores[3]){
        cout << "V";
    }else{
        cout << "F";
    }
}