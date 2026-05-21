#include<bits/stdc++.h>
using namespace std;
int  mex(vector<int>& a) {
    set<int> s(a.begin(), a.end());
    int m = 0;
    while (s.count(m)) {
          m++;
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &u:v){
            cin>>u;
        }
        int x= k-1;
        set<int> s(v.begin(), v.end());

        vector<int>a;
        
        int i=0;
        for(auto u:s){
            a.push_back(u);
            i++;
            if(i==x) break;
        }

        cout<<mex(a)<<endl;
    }
}