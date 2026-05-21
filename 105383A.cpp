#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    pair<string,long long>p[n];
    for(auto &it:p){
        cin>>it.first>>it.second;
    }
    if(n==1) cout<<p[0].second<<endl;
    else{
        long long c=0;
    for(auto it:p){
        if(it.first=="pig"){
            c=max(c,it.second);
        }
    }
    long long sum=0;
    for(auto it:p){
        if(it.second<c && it.first!="pig"){
            sum+=it.second;
        }
    }
    cout<<sum+c<<endl;
    }
}