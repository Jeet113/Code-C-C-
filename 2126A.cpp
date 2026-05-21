#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans=9;
        while(x!=0){
            int rem=x%10;
            ans=min(ans,rem);
            x=x/10;
        }
        cout<<ans<<endl;
    }
}