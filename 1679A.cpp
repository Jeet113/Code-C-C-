#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long mn=0,mx=0;
        if(n%2!=0 || n<4){
            cout<<-1<<endl;
        }
        else if(n==4){
            cout<<1<<" "<<1<<endl;
        }
         else{
            if(n%6!=0){
                 mn=(n/6)+1;
            }else{
                mn=n/6;
            }
            if(n%4!=0){
                mx=(n/4)+1;
            }else{
                mx=n/4;
            }
            cout<<mn<<" "<<mx<<endl;
        }
    }
}