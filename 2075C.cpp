#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        for(auto &it:v){
            cin>>it;
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                int a=(v[i]+v[j])-n;
                a++;
                if(a>0){
                    ans=ans+(a*2);
                }
            }
        }
        cout<<ans<<endl;
    }
}