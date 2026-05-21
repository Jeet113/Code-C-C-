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
        for(int i=0;i<n;i++){
                v[i]+=1;
        }
        for(int i=1;i<n;i++){
            if(v[i]%v[i-1]==0){
                v[i]+=1;
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}