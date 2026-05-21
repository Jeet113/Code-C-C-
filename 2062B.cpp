#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int p=2*((n-1)-i);
            if((x-p)<=0  ||(x-2*i)<=0) flag=false;
        }
         
        if(!flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}