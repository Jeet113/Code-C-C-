#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        int zero=0;
        int one=0;
        int two=0;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            v[i]=x;
            if(x==0) zero++;
            else if(x==1) one++;
            else{
                two++;
            }
        }
        if(sum>s){
            for(auto x:v) cout<<x<<" ";
            cout<<endl;
        }else if(sum+1==s){
            for(int i=1;i<=zero;i++) cout<<0<<" ";
            for(int i=1;i<=two;i++) cout<<2<<" ";
            for(int i=1;i<=one;i++) cout<<1<<" ";
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}