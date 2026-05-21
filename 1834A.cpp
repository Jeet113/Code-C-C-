#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int p=0,ne=0;
        int count=0;
        for(int i=0;i<n;i++){
            int u;
            cin>>u;
            v.push_back(u);
            if(u>0) p++;
            else ne++;
        }
        if((ne<=p) &&(ne%2==0)) cout<<0<<endl;
        else if((ne<=p)&&(ne%2!=0)) cout<<1<<endl;
        else{
             if(ne>p){
                count= ceil((ne-p)/2.0);
                if((ne-count)%2!=0){
                    cout<<count+1<<endl;
                }else{
                    cout<<count<<endl;
                }
            }
            
        }
    }
}