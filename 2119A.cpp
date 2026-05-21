#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        long long int cost=0;
        if(a>b){
            if(a==b+1 && a%2!=0){
                cout<<y<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
        else{
            if(x>y){
                while (a!=b)
                {
                    if(a%2){
                        cost+=x;
                        a=a+1;
                    }else{
                        cost+=y;
                        a=a^1;
                    }
                }
            }
            else{
                cost=(b-a)*x;
            }
            cout<<cost<<endl;
        }
    }
}