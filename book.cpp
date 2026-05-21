#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    int arr[n];
    arr[0]=v[0];
    for(int i=1;i<n;i++){
        arr[i]=v[i]+arr[i-1];
    }
    int l=0,r=n-1,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<=t){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans+1<<endl;
}