#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s1;
        set<int>s2;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            s1.insert(x);
        }
        for(int i=0;i<n;i++){
            cin>>x;
            s2.insert(x);
        }
        if(s1.size()==2 &&s2.size()==1) cout<<"NO"<<endl;
        else if(s1.size()==1 &&s2.size()<=2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}