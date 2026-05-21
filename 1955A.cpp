#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x=n%2;
        int y=n/2;
        int first=(y*b)+(x*a);
        int second=n*a;
        if(first<second){
            cout<<first<<"\n";
        }
        else{
            cout<<second<<"\n";
        }
    }
}