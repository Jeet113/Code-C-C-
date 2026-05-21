#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;
        int mx=n;
        int m=1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='<'){
                v.push_back(m++);
            }else{
                v.push_back(mx--);
            }
        }
        reverse(v.begin(),v.end());
        long long sum=0;
        long long asum=(n*(n+1))/2;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        cout<<asum-sum<<" ";
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}