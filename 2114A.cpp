#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=stoi(s);
        int a=sqrt(n);
        if(a*a!=n){
            cout<<-1<<endl;
        }else{
            if(a%2==0){
                cout<<a/2<<" "<<a/2<<endl;
            }else{
                cout<<a/2<<" "<<a/2+1<<endl;
            }
            
        }
    }
}