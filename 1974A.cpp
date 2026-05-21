#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int count=0,flag=0,ans=0;
         if(y%2==0){
            count=y/2;
        }
        else if(y%2!=0){
            count=y/2+1;
        }
        else if(y==0){
            count=1;
            if(x==0) cout<<0<<endl;
            continue;
        }
        int xcount=15*count;
        flag=xcount-y*4;
        if(x<flag){
            cout<<count<<endl;
        }
        else if(x>flag){
            ans=x-flag;
            if(ans%15==0){
               cout<<count+ans/15<<endl;
            }
            else{
                cout<<count+(ans/15)+1<<endl;
            }
        }
        else{
            cout<<count<<endl;
        }
    }
}