#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        vector<int>b(n);
        for(auto &it:a){
            cin>>it;
        }
        for(auto &it:b){
            cin>>it;
        }
        int count=0;
        int ans=0;
        for(int j=1;j<=x;j++){
            for(int i=0;i<n;i++){
                if(b[i]==-1){
                    if(a[i]+b[i]==j){
                        count++;
                    }
                }
            }
            if(count==n) ans++;
        }
        cout<<ans<<endl;
        
    }
}