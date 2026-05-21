#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c,d;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c>>d;
            if(c!=0) ans+=abs(c-a);
            if(d!=0) ans+=abs(d-b);
        }
        cout<<ans<<endl;
    }
}