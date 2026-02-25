#include <iostream>

using namespace std;

int main(void){
    int d;
    cin >> d;

    int dist_ace = d - 3;
    int out = dist_ace % 8;

    if(out == 3){
        cout << 1;
    }else if(out == 4){
        cout << 2;
    }else if(out == 5){
        cout << 3;
    }
}

//sensor 1 = 3
//sensor 2 = 4
//sensor 3 = 5