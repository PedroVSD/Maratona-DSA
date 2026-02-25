#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n;

    int casa[n];

    for(auto &i: casa){
        cin >> i;
    }

    sort(casa, casa+n);

    cin >> k;

    int l = 0, r = n-1;
    while(l < r){
        int soma = casa[l] + casa[r];
        if(soma == k){
            cout << casa[l] << " " << casa[r] << endl;
            return 0;
        }else if(soma < k){
            l++;
        }else{
            r--;
        }
    }

}