#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v){
            cin>>it;
        }
        for(auto it:v){
            cout<<n+1-it<<" ";
        }
        cout<<endl;
    }
}