#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<long long int,long long int> &p1,pair<long long int,long long int> &p2){
    if(p1.first==p2.first) return p1.second<p2.second;
    else{
        return p1.first<p2.first;
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<long long int,long long int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}