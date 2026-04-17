#include <iostream>
#include <vector>
using namespace std;

int main(void){

    

    int n, m, k;
    int soma = 0;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> vetor(n);
    vector<int> final(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        soma += a[i];
        vetor[i] = soma;
    }

    vector<int> l(m), r(m), d(m);

    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }
    
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        a[i] += d[i];
    }


    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }


}