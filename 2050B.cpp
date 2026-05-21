#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        long long sum=0;
        for(auto &it:v){
            cin>>it;
            sum+=it;
        }
        if(sum%n!=0){
            cout<<"NO"<<endl;
        }else{
            int a=sum/n;
            int in=0;
            int dec=0;
            for(int i=0;i<n;i++){
                if((a-v[i])<0){
                    dec+=abs(a-v[i]);
                }else{
                    in+=abs(a-v[i]);
                }
            }
            if(dec==in) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}