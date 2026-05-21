#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    int size=s.size();
    int c1=0,c2=0;
    for(int i=0;i<size;i++){
        if(s[i]=='4'){
            c1++;
        }else if(s[i]=='7'){
            c2++;
        }
    }
    if((c1+c2==size) || n%4==0 || n%7==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}