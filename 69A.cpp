#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x1=0,y1=0,z1=0;
    int x,y,z;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if(x1==0 && y1==0 && z1==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}