#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        for(int i=0;i<t.size();i++){
            char a=t[i];
            for(int j=0;j<s.size();j++){
                if(s[i]!=a){
                    s[i]='*';
                }
            }
        }
        string str="";
        for(auto c:s){
            if(c!='*'){
                str+=c;
            }
        }
        int h=0;
        int i=0;
        for(i=0;i<str.size();i++){
            if(str[i]!=t[h]){
                char c=str[i];
                for(int i=0;i<str.size();i++){
                if(str[i]==c) str[i]='*';
            }
            }else{
                h++;
            }
        }
        // int j=i;
        // for(j=i;j<str.size();j++){
        //     char c=str[j];
            
        // }
        string check="";
        for(auto c:str){
            if(c!='*'){
                check+=c;
            }
        }
        if(check==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<str<<endl;
    }
}