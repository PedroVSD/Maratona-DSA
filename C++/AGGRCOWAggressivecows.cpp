#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarysearch(vector<int>& stalls, int c);
bool putCows(vector<int>& stalls, int c, int space);


int main(void){
    int t;

    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;

        vector<int> stalls(n);

        for(int i = 0 ; i < n ;i++){
            cin >> stalls[i];
        }

        int final = binarysearch(stalls, c);
        cout << final << endl;
    }
}


int binarysearch(vector<int>& stalls, int c){
    sort(stalls.begin(), stalls.end());

    int resp = 0;
    int start = 1 , end = stalls.back() - stalls.front();
    while(start <= end){
        int mid = (start + end)/2;
        if(putCows(stalls, c, mid)){
            resp = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return resp;
}

bool putCows(vector<int>& stalls, int c, int space){
    int cont = 1;
    int last_position = stalls[0];

    for(int i = 1 ; i < stalls.size(); i++){
        if(stalls[i] - last_position >= space){
            cont++;
            last_position = stalls[i];
        }
        if(cont == c){
            return true;
        }
    }
    return false;
}