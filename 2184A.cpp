#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        if(n==2 ||n==3) cout<<n<<endl;
        else if(n%3==0){
            x=n/3;
            if(x%2==0) cout<<0<<endl;
            else{
                 x=n/2-1;
                y=x+1;
                if(y%2==0){
                    cout<<3<<endl;
                }else{
                    cout<<1<<endl;
                }
            }
        }
        else if(n%2==0){
            if((n/2)%2==0) cout<<0<<endl;
            else cout<<2<<endl;
        }
        else{
            if(n%3==2 && (n/3)%2==0){
                cout<<2<<endl;
            }
            else if(n%3==2){
                cout<<1<<endl;
            }
            else{
                x=n/2-1;
                y=x+1;
                if(y%2==0){
                    cout<<3<<endl;
                }else{
                    cout<<1<<endl;
                }
            }
        }
    }
}