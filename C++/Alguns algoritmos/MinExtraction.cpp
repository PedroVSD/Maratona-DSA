#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int min();

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        cout << min() << endl;
    }
}

int min(){
    int n, sum = 0;
    cin >> n;

    vector<int> a(n);

    for(int &i : a){
        cin >> i;
    }

    //Se preciso pegar o menor número negativo vou ordenar primeiro
    sort(a.begin(), a.end());

    int minimum = a[0];//Menor valor

    for(int i = 0 ; i < n; i++){
        a[i] -= sum;
        sum += a[i]; 
        minimum = max(minimum, a[i]); 
    }

    return minimum;
}