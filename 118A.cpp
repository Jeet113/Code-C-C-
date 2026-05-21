#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>str(s.size());
    for(auto &ch:s){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='y'||ch=='Y'){
            continue;
        }else{
            if(ch>=65 &&ch<=90){
                str.push_back(ch-'a');
            }else{
                str.push_back(ch);
            }
        }
    }
    for(auto ch:str){
        if(ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u'||ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U'||ch!='y'||ch!='Y'){
            cout<<"."<<ch;
        }
    }
}