#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long a=0,b=0;
        for(auto it:s){
            if(it=='_') b++;
            else a++;
        }
        long long ans;
        if(a%2==0){
            a=a/2;
            ans=a*a*b;
        }else{
            a=a/2;
            ans=(a+1)*a*b;
        }
        cout<<ans<<endl;
    }
}