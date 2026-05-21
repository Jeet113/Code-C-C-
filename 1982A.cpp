#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,y1,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(x1<y1){
            if(x2>y2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            if(x2<y2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
}
