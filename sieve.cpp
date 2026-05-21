#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
    // for(int i=2;i*i<n;i++){
    //     if(n%i==0) flag=false;
    // }
    // if(flag) cout<<"prime"<<endl;
    // else cout<<"Not Prime"<<endl;
    vector<bool>prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}