#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        if(b-a==c-b){
            cout<<"YES"<<endl;
        }else{
            long long int a1,b1,c1;
            a1=((2*b-c)/a)*a;
            c1=((2*b-a)/c)*c;
            b1=((a+c)/(2*b))*b;
            if(b-a1==c-b && a1>a){
                cout<<"YES"<<endl;
            }else if(b-a==c1-b && c1>c){
                cout<<"YES"<<endl;
            }else if(b1-a==c-b1 && b1>b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
}