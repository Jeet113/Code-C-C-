#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k,i;
        cin>>n>>k;
        set<long long int> s;
        for(i=0;i<n;i++){
           long long  int x;
            cin>>x;
            s.insert(x);
        }
        long long int total=0;
        for(i=0;i<k;i++){
            auto a=(--s.end());
            total=total+ *a;
            auto b= *a/2;
            s.erase(a);
                
            s.insert(b);
                
        }
        cout<<total<<endl;
    }
}