#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        //vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0) v.push_back(x);
            else odd.push_back(x);
        }
        for(int i=0;i<odd.size();i++){
            v.push_back(odd[i]);
        }
        long long s=0;
        int count=0;
        for(int i=0;i<n;i++){
            s+=v[i];
            if(s%2==0) {
                count++;
                while(s%2==0){
                    s/=2;
                }
            }
        }
        cout<<count<<endl;
    }
}