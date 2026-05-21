#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    int left=0;
    int right=0;
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(v[mid]>=k){
            h=mid-1;
            left=mid;
        }
        else{
            l=mid+1;
        }
    }
    l=0;
    h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(v[mid]<=k){
            l=mid+1;
            right=mid;
        }
        else{
            h=mid-1;
        }
    }
    cout<<right-left+1<<endl;
    
}