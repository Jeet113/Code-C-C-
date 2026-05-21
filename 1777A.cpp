#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &it: v){
            cin>>it;
        }
        int count=0;
        for(int i=0;i<v.size()-1;i++){
            if((v[i]%2==0) && (v[i+1]%2==0)) count++;
            if((v[i]%2!=0) && (v[i+1]%2!=0)) count++;
        }
        cout<<count<<endl;
    }
}