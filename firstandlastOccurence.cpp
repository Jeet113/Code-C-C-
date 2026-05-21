#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    }
    cin>>target;
    int l=0;
    int h=n-1;
    int first=-1;
    int last=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(v[mid]==target){
            first=mid;
            h=mid-1;
        }else if(v[mid]<target){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
     l=0;
    h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(v[mid]==target){
            last=mid;
            l=mid+1;
        }else if(v[mid]<target){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }

    cout<<first<<" "<<last<<endl;
}