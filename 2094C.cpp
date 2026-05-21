#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            } 
        }
        vector<int>v;
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            auto it = find(v.begin(), v.end(), a[i][j]);
            if(it==v.end() && a[i][j]<=2*n){
                v.push_back(a[i][j]);
            } 
         }
       }
       int m=2*n-v.size();
       if(m!=0){
        for(int i=1;i<=2*n;i++){
            auto it = find(v.begin(), v.end(), i);
            if(it==v.end()){
                cout<<i<<" ";
            }
           }
       }
       for(auto it:v){
        cout<<it<<" ";
       }
       cout<<endl;
    }
}