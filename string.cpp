#include<iostream>
#include<string>
using namespace std;
int main(){
    string myName,shortname;
    cout<<"Enter a full name"<<endl;
    getline(cin,myName);
    cout<<"Enter shortname"<<endl;
    cin>>shortname;
    cout<<myName<<"\n";
    cout<<shortname;
}