#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &a:v) cin>>a;
    int size=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<size-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[size-1]<<endl;
}