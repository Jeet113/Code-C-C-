#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    int mid,index1,index2;
    bool flag =true;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]>k){
            low=mid+1;
        }
        else if(a[mid]==k){
            index1=mid;
            high=mid-1;
        }
        else{
            high=mid-1;
        }
    }
     low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]<k){
            low=mid+1;
        }
        else if(a[mid]==k){
            index2=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<index2-index1+1<<endl;
}