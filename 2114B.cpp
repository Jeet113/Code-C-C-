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
        int j=n-1;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[j]) count++;
            j--;
        }
        if(count==k) cout<<"YES"<<endl;
        else if((n/2-count)==(count-k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}