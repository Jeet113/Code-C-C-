#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        for(auto &x:v){
            cin>>x;
        }
        sort(v.begin(),v.end());
        int x1=abs(s-v[0]);
        int x2=abs(s-v[n-1]);
        int x3=abs(v[n-1]-v[0]);
        cout<<min(x1+x3,x2+x3)<<endl;
    }
}