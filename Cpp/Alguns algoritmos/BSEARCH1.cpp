#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v, int x) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (v[m] == x) return m;
        if (v[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    scanf("%d %d", &n, &q);

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    vector<int> results(q);
    for (int i = 0; i < q; i++) {
        int x;
        scanf("%d", &x);
        results[i] = binarysearch(v, x);
    }

    for (int i = 0; i < q; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}
