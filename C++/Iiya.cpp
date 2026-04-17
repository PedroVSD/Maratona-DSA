#include <iostream>
#include <vector>

using namespace std;

int main(){

    int m, n;
    int e, d;
    string s;

    cin >> s;
    cin >> m;
    cin >> e >> d;

    n = s.size();

    vector<int> contador(n, 0);

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            contador[i] = contador[i-1] + 1;
        }else{
            contador[i] = contador[i-1];
        }
    }

    for(int i = 0; i < m; i++){
        cout << contador[d-1] - contador[e-1] << endl;
        cin >> e >> d;
    }


    return 0;
}