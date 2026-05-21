#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(auto &u:v){
            cin>>u;
        }
        int i=0;
        for(i=0;i<n;i++){
            if(v[i]==1){
                i=i+x;
                break;
            }
        }
        bool flag=true;
        if(i<n){
            while(i<n){
                if(v[i]==1){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                i++;
            }
            if(flag) cout<<"YES"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}