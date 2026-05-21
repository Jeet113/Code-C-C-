#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int e=0;
        int o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) e+=a[i];
            else{
                o+=a[i];
            }
        }
        if(e%2==0 &&o%2==0){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

    }
}