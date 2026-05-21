#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag=true;
        for(int i=1;i<n-1;i++){
            if(a[i]=='1'){
                if(b[i-1]=='0'){
                    swap(a[i],b[i-1]);
                }else if(b[i+1]=='0'){
                    swap(a[i],b[i+1]);
                }
            }
        }
        if(a[0]=='1'){
            if(b[1]=='0'){
                swap(a[0],b[1]);
            }
        }
        if(a[n-1]=='1'){
            if(b[n-2]=='0'){
                swap(a[n-1],b[n-2]);
            }
        }
        flag=true;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        cout<<a<<endl;
    }
}