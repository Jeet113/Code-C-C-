#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n-1);
        for(auto &u:v){
            cin>>u;
        }
        int a=accumulate(v.begin(), v.end(), 0LL);
        cout<<-a<<endl;
    }
}