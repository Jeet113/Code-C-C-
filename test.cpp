#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v, v+ n, greater<int>());
    vector<int>vec;
    for(int i=0;i<k;i++){
        vec.push_back(v[i]);
    }
    cout<<*min_element(vec.begin(), vec.end())<<endl;
    }
}