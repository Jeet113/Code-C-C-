#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SWAP(vector<int> &v,int b,int e,int t){
    int k=e-b;
    int j=0;
    for(int i=b;i<e,j<k;i++,j++){
        swap(v[i],v[t+j]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    int q;
    cin>>q;
    while(q--){
        int b,e,t;
        cin>>b>>e>>t;
        SWAP(v,b,e,t);
    }
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
        }
        cout<<v[n-1]<<endl;

}