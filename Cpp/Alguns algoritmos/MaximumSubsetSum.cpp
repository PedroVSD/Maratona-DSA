/*MAXSUM*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int MaximumSubsetSum(vector<int>& array, int n) {
    int sum = array[0];
    int max_sum = array[0];

    for (int i = 1; i < n; i++) {
        sum = max(array[i], sum + array[i]);
        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<int> array(n);

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        int answer = MaximumSubsetSum(array, n);
        cout << answer << endl;
    }

    return 0;
}



/*
#include <iostream>
#include <vector>

using namespace std;

// Função Kadane sem max()
int MaximumSubsetSum(vector<int>& array, int n) {
    int sum = array[0];
    int max_sum = array[0];

    for (int i = 1; i < n; i++) {
        if (sum + array[i] > array[i]) {
            sum = sum + array[i];
        } else {
            sum = array[i];
        }

        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    return max_sum;
}

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        vector<int> array(n);

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        int answer = MaximumSubsetSum(array, n);
        cout << answer << endl;
    }

    return 0;
}

*/