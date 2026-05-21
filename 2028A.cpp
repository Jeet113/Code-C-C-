#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        string s;
        cin>>n>>a>>b;
        cin>>s;
        int x,y,m;
        x=0,y=0,m=100;
        bool flag=false;
        while(m--){
            for(int i=0;i<n;i++){
                if(s[i]=='N') y=y+1;
                else if(s[i]=='E') x=x+1;
                else if(s[i]=='W') x=x-1;
                else if(s[i]=='S') y=y-1;
                if(x==a && y==b){
                    m=0;
                    flag=true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}