#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& vec, int flag, int left, int right);
int exponentialSearch(vector<int>& vec, int flag);


int main(void){

    vector<int> vec(10);
    generate(vec.begin(), vec.end(), []() { return rand() % 11; });
    int flag;

    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cin >> flag;

    sort(vec.begin(), vec.end());
    
    int es = exponentialSearch(vec, flag);
    cout << es;
}

int binarySearch(vector<int>& vec, int flag, int left, int right){

    while(left <= right){
        int mid = (left+right)/2;
        if(vec[mid] == flag){
            return mid;
        }else if(vec[mid] < flag){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}

int exponentialSearch(vector<int>& vec, int flag){
    if(vec[0] == flag){
        return 0;
    }

    int n = vec.size();
    int right = 1;

    while (right < n && vec[right] < flag){
        right *= 2;
    }
    if(vec[right] == flag){
        return right;
    }

    return binarySearch(vec, flag, right / 2, min(right, n - 1));
    
}