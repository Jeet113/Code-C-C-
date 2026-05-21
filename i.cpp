#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
bool check(vector<int> &v,int mid){
    int count=0,int temp=0;
    for(int i=0;i<n;i++){
        if(temp+v[i]>=mid){
            count++;
            temp=v[i];
        }
        else{
            temp=temp+v[i];
        }
        if(count==m) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
    cin>>n>>m;
    vector<int>v(n);
    for(auto &u:v){
        cin>>u;
    }
    // auto max=*max_element(a.begin(),a.end());
    // vector<int> v(n);
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+a[i];
    //     v[i]=sum;
    // }
    int low=0,high=1e9;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(v,mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"Case"<<" "<<j<<":"<<" "<<ans<<endl;
    }
    
    
}