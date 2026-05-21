#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &u:v){
            cin>>u;
        }
        int i=0;
        int j=n-1;
        string s="";
        bool flag=true;
        while(i<j){
            if(flag){
                if(v[i]<v[j]){
                s+="RL";
                i++;
                j--;
            }
            else if(v[i]>v[j]){
                s+="LR";
                i++;
                j--;
            }
            flag=false;
         }else{
                if(v[i]>v[j]){
                s+="RL";
                i++;
                j--;
            }
            else if(v[i]<v[j]){
                s+="LR";
                i++;
                j--;
            }
            flag=true;
         }
            
            if(i==j) {
            s+="L";
            break;
        }
        }
        cout<<s<<endl;
    }
}