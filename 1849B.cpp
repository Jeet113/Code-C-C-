#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        pair<int,int>p[n];
        for(int i=0;i<n;i++){
            cin>>p[i].first;
            p[i].second=i+1;
            p[i].first%=k;
            if(p[i].first%k!=0) p[i].first=k-p[i].first;
        }
        sort(p,p+n);
        for(auto &it:p){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}
