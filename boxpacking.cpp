#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &u:v){
        cin>>u;
    }
   int m=*max_element(v.begin(),v.end());
   map<int ,int> map;
   for(int i=0;i<n;i++){
    map[v[i]]++;
   }
   cout<<map[m];

}