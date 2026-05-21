#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int count=0;;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    }
    sort(v.rbegin(),v.rend());
    int i=0;
    int c;
    while(count<n){
        c=p/v[i];
        if(p%v[i]==0) count+=c;
        else count=count+c+1;
        i++;
    }
    cout<<i<<endl;
}