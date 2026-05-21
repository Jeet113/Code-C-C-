#include<iostream>
#include<vector>
using namespace std;
int ub(vector<int> v,int n,int z){
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]<=z){
            ans=mid;
            l=mid+1;

        }
        else{
            r=mid-1;
        }
    }
    return ans;
}
int lb(vector<int> v,int n,int y){
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>=y){
            ans=mid;
            r=mid-1;

        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    int l,t;
    cin>>t;
    for(l=1;l<=t;l++){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    cout<<"Case "<<l<<":"<<endl;
    for(int i=0;i<q;i++){
        int y,z;
        cin>>y>>z;
      int a=ub(v,n,z);
      int b=lb(v,n,y);
      cout<<a-b+1<<endl;
    }
    }
    
}
