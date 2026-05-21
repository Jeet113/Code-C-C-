#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk,xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
        int x1,y1,x2,y2;
        x1=xk+a;
        y1=xk+b;
        x2=xk+b;
        y2=xk+a;
        int count=0;
        if(x1+a==xq && y1+b==yq){
            count++;
        }
        else if(x1+b==xq && y1+a==yq){
            count++;
        }
        if(x1!=x2 && y1!=y2){
            if(x2+a==xq && y2+b==yq){
            count++;
        }
        else if(x2+b==xq && y2+a==yq){
            count++;
        }
        }
        cout<<count<<endl;
    }
}