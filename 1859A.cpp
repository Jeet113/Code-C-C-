#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>b;
        vector<int>c;
        for(auto &it:v){
            cin>>it;
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                if(v[0]==v[i]){
                    b.push_back(v[i]);
                }else{
                    c.push_back(v[i]);
                } 
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto u:b){
                cout<<u<<" ";
            }
            cout<<endl;
            for(auto u:c){
                cout<<u<<" ";
            }
            cout<<endl;
        }
    }
}