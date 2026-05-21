#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long c=0;
        if(n%2!=0){
            n=n-k;
            c=1+(n/(k-1));
            if(n%(k-1)!=0){
                c=c+1;
            }
        }else{
            c=(n/(k-1));
            if(n%(k-1)!=0){
                c=c+1;
            }
        }
        cout<<c<<endl;
    }
}