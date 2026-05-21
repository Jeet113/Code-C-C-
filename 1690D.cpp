#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='B'){
                count++;
            }
        }
        cout<<count<<endl;
    }
}