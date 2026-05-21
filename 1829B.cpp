#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        //v[n+1]=10;
        int count=0;
        int temp=0;
        for(auto &it:v){
            cin>>it;
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
                temp=max(temp,count);
                if(v[i+1]==1){
                    count=0;
                }
            }
        }
        cout<<temp<<endl;
    }
}