#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int n;
    int tot = 0;

    cin >> n;

    vector<int> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i <= n - 3; i++) {
        if (s[i] == 1 && s[i+1] == 0 && s[i+2] == 0) {
            tot++;
        }
    }

    cout << tot;
}