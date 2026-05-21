#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,bool> map;
    while(n--){
        string s;
        cin>>s;
        if(map[s]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        map[s]=1;
    }

}