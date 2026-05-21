#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b==0 && c==0){
        cout<<a<<endl;
    }
    int x=b/3;
    int y=b%3;
    int flag,count=0;
    if(y==1 && c>=2){
            int z=(c+y)/3;
            int d=(z%3);
            if(d>0){
            count=1; 
            }
            else{
                count=0;
            }
            flag=1;
    }
    else if(y=1 && c<2){
        cout<<-1<<endl;
    }
    else if(y=2 && c>=1){
        int u=(c+y)/3;
        int l=(u%3);
            if(l>0){
            count=1;
            }
            else{
                count=0;
            }
        flag=-1;
    }
    else if(y=2 && c<1){
        cout<<-1<<endl;
    }
    if(flag==-1){
        cout<<a+x+z+count<<endl;
    }
    
}