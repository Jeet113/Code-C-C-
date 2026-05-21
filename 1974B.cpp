#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
using namespace std;
void getUniqueChars(string &r, string &s){
 
set<char> set(r.begin(), r.end());

set.insert(s.begin(), s.end());

r = string(set.begin(), set.end());
   return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,r;
        cin>>s;
        sort(s.begin(),s.end());
        getUniqueChars(r,s);
        int n=r.size();
        

    }
}