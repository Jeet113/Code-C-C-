#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    int x=s.size();
    if(x==1){
        cout<<s;
    }
    else{
        for(int i=0;i<x-1;i+=2){
        for(int j=0;j<x-2;j++){
            if(s[j]>s[j+2]){
                c=s[j];
                s[j]=s[j+2];
                s[j+2]=c;
            }
        }
    }
    cout<<s;
    }
    
    
}