#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            if(i!=x){
                cout<<i<<" ";
            }
        }
        if(n!=x){
            cout<<x<<endl;
        }else{
            cout<<endl;
        }
    }
}