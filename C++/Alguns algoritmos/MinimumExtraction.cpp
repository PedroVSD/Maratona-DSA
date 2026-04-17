#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solve();

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        cout << solve() << endl;
    }
}


int solve(){
    int n, soma = 0;

    cin >> n;

    //int a[n];
    vector<int> a(n);

    for(auto &i: a){
        cin >> i;
    }

    //sort(a, a + n);
    sort(a.begin(), a.end());

    int res = a[0];

    for(int i = 0; i < n; i++){
        a[i] -= soma;
        soma += a[i];
    }

    for(int i = 0; i < n; i++){
        res = max(res, a[i]);
    }

    return res;

}