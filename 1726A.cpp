#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v){
            cin>>it;
        }
        auto it=max_element(v.begin(),v.end());
            for(int i=0;i<n;i++){
                if(*it==v[i]){
                    
                }
            }
        if(n==1) cout<<0<<endl;
        else{
            auto mx=*max_element(v.begin(),v.end());
            auto mn=*min_element(v.begin(),v.end());
            bool flag=true;
            for(int i=0;i<n;i++){
                if(mx==v[i] &&(i!=n-1)){
                    if(mn==v[i+1]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){
            int a=v[0];
            int b=v[n-1];
            int ans=max((mx-a),(b-mn));
            int f=max(ans,(b-a));
            cout<<f<<endl;
            }else{
                cout<<mx-mn<<endl;
            }
        }
    }
}