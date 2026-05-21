#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=ceil(n*1.0/2);
        vector<int>v;
        int x;
        cin>>x;
        int count=0;
        x=abs(x);
        v.push_back(x);
        for(int i=1;i<n;i++){
            int y;
            cin>>y;
            y=abs(y);
            if(x<y){
                count++;
            }
            v.push_back(y);
        }
        if(count>=m-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}