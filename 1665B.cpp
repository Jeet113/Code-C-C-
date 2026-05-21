#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &u:v){
            cin>>u;
        }
        map<int,int>m;
        for(auto x:v){
            m[x]++;
        }
         auto mx=m.begin()->second;
         int mxa=0;
        for(auto it:m){
            if(it.second>mx){
                mx=it.second;
                mxa=it.first;
            }
        }
        if(n==mx) cout<<0<<endl;
        else{
            int count=n-mx;
            //int count2=0;
            for(int i=0;i<n;i++){
                count++;
                mx=mx*2;
                if(mx>=n) break;
            }
            cout<<count<<endl;
        }
    }
}