#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
         int count=0;
        while(a!=0){
            if(b==1){
                b=b+1;
                count++;
            }
            a=a/b;
            count++;
            if(a==b){
                b++;
                count++;
            }
        }
        cout<<count<<endl;
    }
}