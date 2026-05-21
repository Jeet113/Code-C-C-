#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        long long l=0,r=n*m;
        int ans;
        while(l<=r){
            long long mid=(l+r)/2;
            if(mid==k){
                ans=k;
            }else if(mid>k){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        
        cout<<<<endl;
    }
}