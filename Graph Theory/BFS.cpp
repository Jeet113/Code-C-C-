#include <bits/stdc++.h>
using namespace std;

int n = 7;
vector<vector<int>> adj(n + 1);
vector<bool> visited(n + 1, false);

void BFS(int root) {
    queue<int> q;
    q.push(root);
    visited[root] = true;

    while (!q.empty()) {
        int head = q.front();
        q.pop();
        cout << head << " ";
        
        for (auto child : adj[head]) {
            if (visited[child]==false) {
                visited[child] = true;
                q.push(child);
            }
        }
    }
}
int main() {
    int e;
    cin >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    BFS(4);
}
