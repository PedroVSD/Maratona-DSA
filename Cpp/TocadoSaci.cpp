#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(vector<vector<int>> &adj, pair<int, int> start, pair<int, int> end);

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    
    cin >> n >> m;

    vector<vector<int>> _map(n, vector<int>(m));
    pair<int, int> start;
    pair<int, int> end;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> _map[i][j];
            if(_map[i][j] == 2){
                start = {i ,j};
            }
            if(_map[i][j] == 3){
                end = {i, j};
            }
        }
    }

    int path = bfs(_map, start, end);
    cout << path;
    
    
}

int bfs(vector<vector<int>> &adj, pair<int, int> start, pair<int, int> end){
    

}



/*int adj_size = adj.size();
    
    vector<bool> visited(adj_size, false);
    vector<int> path(adj_size, -1);
    queue<int> _queue;


    visited[source] = true;
    path[source] = 0;
    _queue.push(source);

    while(!_queue.empty()){
        int current = _queue.front();
        _queue.pop();

        //res.push_back(current);
        if(current == target){
            return path[current];
        }

        for(int x : adj[current]){
            if(!visited[x]){
                visited[x] = true;
                path[x] = path[current] + 1;
                _queue.push(x);
            }
        }
    }*/