#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    vector<int> vec(k);
    for(auto &b:vec){
        cin>>b;
    }
    int arr[n];
    arr[0]=v[0];
    for(int i=1;i<n;i++){
        arr[i]=v[i]+arr[i-1];
    }
    for(int i=0;i<k;i++){
    int l=0,r=n-1,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<=vec[i]){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans+1<<endl;
    }
    
    
}