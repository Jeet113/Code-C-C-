#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int mn=10e9;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mn=min(mn,x);
            v.push_back(x);
        }
        if(mn==v[n-1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}