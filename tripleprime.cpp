#include<iostream>
#include<math.h>
#include<vector>
bool prime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag>0) return false;
    else{
        return true;
    }
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,x;
    cin>>n;
    x=sqrt(n);
    vector<int> v;
    for(int i=2;i<=x;i++){
        if(prime(i)){
            v.push_back((i*i));
        }
    }
    int l=v.size();
    if(l>=3){
        int sum=0;
            for(int i=1;i<l;i++){
                for(int j=i+1;j<l;j++){
                sum=v[0]+v[i]+v[j];
                if(sum==n){
                cout<<"Yes"<<endl;
                goto end;
              }
              sum=0;
            }
                
            }
        cout<<"No"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    end:
    int y;
    }
    return 0;
}