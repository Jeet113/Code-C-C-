#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int a,x;
        cin>>a;;
        if(a==0){
            cin>>x;
            v.push_back(x);
        }
        else if(a==1){
            cin>>x;
            cout<<v[x]<<endl;
        }
        else{
            v.pop_back();
        }
        
    }
}