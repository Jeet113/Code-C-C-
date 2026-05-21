#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=k){
            ans=mid;
            l=mid+1;

        }
        else{
            r=mid-1;
        }
    }
    cout<<ans+1<<endl;
}