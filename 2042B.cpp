#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }int one=0;
        int two=0;
        for(auto it:mp){
            if(it.second==1){
                one++;
            }else{
                two++;
            }
        }
        cout<<two+((one+1)/2)*2<<endl;
    }
}