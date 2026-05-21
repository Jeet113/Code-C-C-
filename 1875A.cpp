#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,n;
        cin>>a>>b>>n;
        long long sum=b;
        long long c=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x>=a){
                c++;
            }else{
                sum+=x;
            }
        }
        long long s=(a-1)*c;
        cout<<sum+s<<endl;
    }
}