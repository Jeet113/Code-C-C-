#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
         int u;
        cin>>u;
        v.push_back(abs(u));
    }
    cout<<*min_element(v.begin(),v.end())<<endl;
}