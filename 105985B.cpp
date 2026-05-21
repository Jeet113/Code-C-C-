#include<bits/stdc++.h>
using namespace std;
int main(){
    int H,M;
    cin>>H>>M;
    if(H>=17 || H<9){
        cout<<"NO COFFEE"<<endl;
    }else{
        if((H==9 || H==11 || H==13 ||H==15) &&(M==0)){
            cout<<120<<endl;
        }else if(H>=9 && H<11){
            if(11-H==1){
                cout<<60-M<<endl;
            }else{
                cout<<60+60-M<<endl;
            }
        }else if(H>=11 && H<13){
            if(13-H==1){
                cout<<60-M<<endl;
            }else{
                cout<<60+60-M<<endl;
            }
        }else if(H>=13 && H<15){
            if(15-H==1){
                cout<<60-M<<endl;
            }else{
                cout<<60+60-M<<endl;
            }
        }else if(H>=15 && H<17){
            if(17-H==1){
                cout<<60-M<<endl;
            }else{
                cout<<60+60-M<<endl;
            }
        }
    }
}