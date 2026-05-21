#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        long long s=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            s=s^x;
        }
        if(s==0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
    }
}