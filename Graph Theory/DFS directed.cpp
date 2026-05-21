#include<bits/stdc++.h>
using namespace std;
vector<bool> v(100,false);
void DFS(int root,vector<vector<int>> &adj){
    if(v[root]==true){
        return;
    }
    v[root]=true;
    cout<<root<<" ";
    for(auto i: adj[root]){
        DFS(i,adj);
    }
}
int main(){
    int n,e;
    cin>>n,e;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        DFS(i,adj);
    }
}