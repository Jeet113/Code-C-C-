#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v;
        long long sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        vector<int>p(n+1);
        p[0]=0;
        for(int i=1;i<=n;i++){
            p[i]=p[i-1]+v[i-1];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long tempSum=(r-l+1)*k;
            if((sum-(p[r]-p[l-1])+tempSum)%2==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
}