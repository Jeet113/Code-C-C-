#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        int p_=p.size();
        int s_=s.size();
        string ans1="";
        string ans2="";
        string ans3="";
        string ans4="";
        for(int i=0;i<p_;i++){
            if(p[i]=='L'){
                ans1+='L';
                ans2+="LL";
                ans3+='L';
                ans4+="LL";
            }else{
                ans1+='R';
                ans2+="RR";
                ans3+="RR";
                ans4+='R';
            }
        }
        if(ans1==s || ans2==s || ans3==s || ans4==s){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}