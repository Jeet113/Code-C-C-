#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    //insertion sort
    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

}