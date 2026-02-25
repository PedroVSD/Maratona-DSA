#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    vector<int> w(n);

    for(int i = 0; i < n; i++){
        cin >> w[i];
    }

    int dias = 0;

    for(int i = 0; i<n;i++){
        dias += (w[i]+k-1)/k;
    }

    cout << (dias+1)/2 << endl;

    return 0;
}