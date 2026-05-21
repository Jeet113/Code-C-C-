#include<iostream>
#include<vector>
using namespace std;
int a[100000];
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(auto &u:v){
        cin>>u;
    }
    for(int i=0;i<n;i++){
        a[v[i]]++;
    }
    cout<<a[x];


}