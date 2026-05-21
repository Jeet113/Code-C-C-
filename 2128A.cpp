#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<long long>v(n);
        for(auto &u:v){
            cin>>u;
        }
        int ans=0;
        sort(v.rbegin(),v.rend());
        int idx=0;
        // for(int i=0;i<n;i++){
        //     if(v[i]>c) idx++;
            
        // }
        int s=0;
        for(int i=0;i<n;i++){
            if(v[i]*pow(2,s)<=c) s++;
            else{
                ans++;
            }
        }
        cout<<ans+idx<<endl;
    }
}