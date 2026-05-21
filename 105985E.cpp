#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string a="";
       long long sum=0;
        for(int i=n-1;i>=0;i--){
            a+=s[i];
        }
        if(a==s) cout<<0<<endl;
        else if(n==2) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                int x=abs((s[i]-'a')-(a[i]-'a'));
                sum+=x;
            }
            if(sum%2==0){
                cout<<sum/2<<endl;;
            }else{
                cout<<-1<<endl;
            }
        }
    }
}