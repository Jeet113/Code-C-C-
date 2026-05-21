#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mn=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(!is_sorted(a,a+n)){
            cout<<0<<endl;
        }else{
            vector<pair<int,int>>v;
            for(int i=0;i<n-1;i++){
                int u=a[i+1]-a[i];
                v.push_back({u,i});
            }
            sort(v.begin(),v.end());
            int index=v[0].second;
            int q=(a[index]+a[index+1])/2+1;
            int ans=q-a[index];
            cout<<ans<<endl;
            
        }
    }
}