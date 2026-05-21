#include<iostream>
#include<cmath>

using namespace std;
int ans(int x){
    int y=(-1+sqrt(1+4*2*x))/2;
    return ceil(y);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        long long x;
        cin>>k>>x;
        cout<<ans(x)<<endl;
    }
}