#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        int c=n-s.size();
        int a=ceil(c/2.0);
        cout<<n-(2*a)<<endl;
    }
}