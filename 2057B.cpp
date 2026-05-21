#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k,temp;
       cin>>n>>k;
       set<int>s;
       for(int i=0;i<n;i++){
            cin>>temp;
            s.insert(temp);
       }
       vector<int> v;
       for(auto x:s){
        v.push_back(x);
       }
       if(n==k) {
        cout<<1<<endl;
        continue;
       }
       int max=v.back();
       for(int i=0;i<k;i++){
         for(int i=0;i<v.size();i++){
            if(v[i]<max){
                v[i]++;
            }
         }
       }

       set<int>set;
       for(int i=0;i<v.size();i++){
            set.insert(v[i]);
       }
       //cout<<set.size()<<endl;
    
    }
}