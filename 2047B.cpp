#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        auto mx=mp.begin()->second;
        auto mxc=mp.begin()->first;
        auto mn=mp.begin()->second;
        auto mnc=mp.begin()->first;
        for(auto it:mp){
            if(it.second>=mx){
                mx=it.second;
                mxc=it.first;
            }
            if(it.second<mn){
                mn=it.second;
                mnc=it.first;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]==mnc){
                s[i]=mxc;
                break;
            }
        }
        cout<<s<<endl;
    }
}