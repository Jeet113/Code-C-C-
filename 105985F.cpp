#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k%(n+1)==0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
}