#include<bits/stdc++.h>
using namespace std;
int lu(int n){
    //int temp=n;
    int mx=0;
    int mn=9;
    while(n!=0){
        int r=n%10;
        mx=max(mx,r);
        mn=min(mn,r);
        n=n/10;
    }
    return mx-mn;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int m=lu(l);
        int ans=l;
        for(int i=l+1;i<=r;i++){
            int x=lu(i);
            if(x>m){
                m=x;
                ans=i;
            }
            if(m == 9) break;
        }
        cout<<ans<<endl;
    }
}