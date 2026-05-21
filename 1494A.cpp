#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a,b,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a++;
            if(s[i]=='B') b++;
            if(s[i]=='C') c++;
        }
    }
}