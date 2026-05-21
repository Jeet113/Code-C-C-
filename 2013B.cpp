#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v){
            cin>>x;
        }
        if(n!=2){
            ll u=v[n-1];
            for(ll i=0;i<n-2;i++){
                v[n-2]=v[n-2]-v[i];
            }
            cout<<u-v[n-2]<<endl;;
        }else{
            cout<<v[1]-v[0]<<endl;
        } 
    }
}