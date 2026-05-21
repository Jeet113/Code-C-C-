#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,c;
bool check(vector<int> &v,int mid){
        int count=1;
        int previous_position=v[0];
        for(int i=1;i<n;i++){
            if(v[i]-previous_position>=mid){
                count++;
                previous_position=v[i];
            }
            if(count==c) return true;
        }
        return false;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        cin>>n>>c;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
    sort(v.begin(),v.end());
    int low=1,ans=0;
    int high=1e9;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(v,mid)){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    }
    
}