#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited);
int conected(int  n, vector<vector<int>> &vertex);

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n ,m;

    cin >> n >> m;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ans = conected(n, adj);
    cout << ans << endl;
    
}

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited){

    visited[v] = true;

    for(int i : adj[v]){
        if(!visited[i]){
            dfs(i, adj, visited);
        }
    }  
}

int conected(int  n, vector<vector<int>> &adj){

    vector<bool> visited(n, false);
    int count = 0;

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            dfs(i, adj, visited);
            count++;
        }
    }
    return count;
}