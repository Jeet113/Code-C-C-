#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
    cin>>s;
    int h=(int(s[0])-48)*10+(int(s[1])-48);
    string m;
    if(h <12|| (s[0]=='0'&& s[1]=='0')){
        m="AM";
    }
    else{
        m="PM";
    }
    h=h%12;
    if(h==0){
        cout<<"12"<<s[2]<<s[3]<<s[4]<<" "<<m<<endl;
    }
    else if(h<10){
        cout<<"0"<<h<<s[2]<<s[3]<<s[4]<<" "<<m<<endl;
    }
    else{
        cout<<h<<s[2]<<s[3]<<s[4]<<" "<<m<<endl;
    }
    }
    
    
}