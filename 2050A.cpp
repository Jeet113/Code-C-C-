#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> s(n);
        for(auto &it:s){
            cin>>it;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i].size()<=m){
                count++;
                m=m-s[i].size();
            }else{
                break;
            }
        }
        cout<<count<<endl;
    }
}
