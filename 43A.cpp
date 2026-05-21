#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int mx=0;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
        mx=max(mx,mp[s]);
    }
    for(auto it:mp){
        if(it.second==mx){
            cout<<it.first<<endl;
        }
    }

}