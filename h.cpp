#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    long long int n;
    long long int k;
    cin>>n>>k;
    vector<long long int> v;
    int sq=sqrt(n);
    for(long long int i=1;i<=sq;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }

    }
    sort(v.begin(), v.end() );
    long long int l=v.size();
    if(k>l){
        cout<<-1<<endl;
    }
    else{
        cout<<v[k-1]<<endl;
    }

}