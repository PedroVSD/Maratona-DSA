#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int grandeza(vector<int> array);

int main(void){

}

int grandeza(vector<int> array){
    sort(array.begin(), array.end());

    int i = 0, j = 0;
    int grandezaMaior;
    int size = array.size();

    while(i < size && j < size){
        if(array[j] > array[i]){
            grandezaMaior++;
            i++;
            j++;
        }
        j++;
    }

    return grandezaMaior;

}