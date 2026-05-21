#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a>=x) v1.push_back(a);
            else{
                v2.push_back(a);
            }
        }
        int ans=v1.size();
        sort(v2.rbegin(),v2.rend());
        int temp=v2.size();
        int l=0;
        int i=0;
        while(temp--){
            l++;
            if(v2[i]*l>=x){
                ans++;
                l=0;
            }
            i++;
        }
        cout<<ans<<endl;
    }
}