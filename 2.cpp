#include <iostream>
#include<vector>
using namespace std;

 void Fun(int x){
    for(int i=0;i<2;i++){
        for(int j=0;j<x;j++){
            if(j%2==0){
                cout<<"##";
            }
            else{
                cout<<"..";
            }
        }
        cout<<endl;
    }
    
 }
 void fun(int y){
    for(int i=0;i<2;i++){
        for(int j=0;j<y;j++){
            if(j%2==0){
                cout<<"..";
            }
            else{
                cout<<"##";
            }
        }
        cout<<endl;
    }
 }
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        if(i%2==0){
            Fun(n);
        }
        else{
            fun(n);
        }
    }
    }
    
    
}