#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            vector<int>odd;
            vector<int>even;
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    odd.push_back(i);
                }else{
                    even.push_back(i);
                }
            }
            for(auto it:odd){
                cout<<it<<" ";
            }
            for(auto it:even){
                cout<<it<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}