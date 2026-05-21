#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=1;
    int h=n;
    int ans;
    while(l<=h){
        int mid=(l+h)/2;
        if(mid*mid<=n){
           l=mid+1;
           ans=mid;
        }else{
            h=mid-1;
        }

    }
    cout<<ans<<endl;
}