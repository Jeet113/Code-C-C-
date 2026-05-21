#include<iostream>
#include<string>
using namespace std;
struct car{
    string name;
    string color;
    int model;
};
int main(){
    car mycar1;
    mycar1.name="BMW";
    mycar1.color="RED";
    mycar1.model=1974;
    cout<<mycar1.name<<endl<<mycar1.color<<endl<<mycar1.model<<endl;

}