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
        for(auto &u:v){
            cin>>u;
        }
        sort(v.begin(),v.end()-1);
        
        cout<<v[n-1]+v[n-2]<<endl;
    }
}