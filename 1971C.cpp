#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool f1=false;
        bool f2=false;
        for(int i=min(a,b);i<=max(a,b);i++){
            if(i==c) f1=true;
            if(i==d) f2=true;
        }
        if(f1){
            if(f2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(f2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}