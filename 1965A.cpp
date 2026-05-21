#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count=0;
        while(true){
        int k=v[0];
        for(int i=0;i<n;i++){
             v[i]=v[i]-k;
        }
        v.erase(v.begin());
        count++;
        if(v[n-1]==0) break;
        }
        if(count%2==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        
    }
}