#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &it:v){
            cin>>it;
        }
        int ans=__gcd(v[0],v[1]);
        for(int i=2;i<n;i++){
            ans=__gcd(ans,v[i]);
        }
        if(ans>n) {
            cout<<"No"<<endl;
        }
        else if(ans==1) cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
    }
}