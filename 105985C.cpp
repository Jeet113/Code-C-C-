#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long  f,c,x,y;
        cin>>f>>c>>x>>y;
        long long  a=f;
        bool flag=true;
        long long i=1;
        for(i=1;i<=n;i++){
            if(a-x<0){
                flag=false;
                break;
            }
            a=a-x;
            if(a+y>=c){
                a=c;
            }else{
                a=a+y;
            }
        }
        if(flag){
            cout<<"Mission Successful"<<endl;
        }else{
            cout<<"Mission Failed "<<i<<endl;
        }
    }
}
