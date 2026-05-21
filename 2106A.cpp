#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int c0=0,c1=0;
        int ans=0;
        string s;
        for(int i=0;i<n;i++){
             s=a;
            if(s[i]=='0'){
              s[i]='1';
              for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    c1++;
                }
            }
            }else if(s[i]=='1'){
                s[i]='0';
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        c1++;
                    }
                }
            }
            
        }
        cout<<c1<<endl;
    }
}