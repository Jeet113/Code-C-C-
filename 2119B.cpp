#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        vector<int>v;
        long long int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        if(px==qx && py==qy){
            if(sum==v[0]*n){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            int d=(px-qx)*(px-qx)+(py-qy)*(py-qy);
            int dis=ceil(1.0*sqrt(d));
            if(sum>=dis) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}