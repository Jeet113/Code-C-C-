#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>a>>b>>c>>n;
        long long sum=a+b+c+n;
        int m=max(a,max(b,c));
        if(sum%3==0 && sum/3>=m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}