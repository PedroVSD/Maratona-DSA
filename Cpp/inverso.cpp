#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> v(10);
    vector<int> v2(10);

    for(int i = 0; i < 10; i++){
        cin >> v[i];
    }

    for(int i = 0; i < 10; i++){
        v2[i] = v[9 - i];
    }

    for(int i = 0; i < 10; i++){
        cout << v2[i] << endl;
    }

}