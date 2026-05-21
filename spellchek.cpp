#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='T'||s[i]=='m'|| s[i]=='r'|| s[i]=='i'|| s[i]=='u') {
        count++;
      }
    }
    if(count==5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    }
    
}