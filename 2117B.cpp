#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>o;
        vector<int>e;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(i%2) o.push_back(i);
            else{
                e.push_back(i);
            }
        }
        if(n%2==0){
            int j=0;
            int k=n/2-1;
            for(int i=0;i<n/2;i++){
                ans.push_back(o[j]);
                ans.push_back(e[k]);
                j++;
                k--;
            }
        }else{
            int j=0;
            int k=o.size()-1;
            for(int i=0;i<e.size();i++){
                ans.push_back(e[j]);
                ans.push_back(o[k]);
                j++;
                k--;
            }
            ans.push_back(o[0]);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}