#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=10;
        char str[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> str[i][j];
            }
        }
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(str[i][j]=='X') {
                    if(i==0||j==0||i==9||j==9) count+=1;
                    else if(i==1||j==1||i==8||j==8) count+=2;
                    else if(i==2||j==2||i==7||j==7) count+=3;
                    else if(i==3||j==3||i==6||j==6) count+=4;
                    else if(i==4||j==4||i==5||j==5) count+=5;
                }
            }
        }
        cout << count << endl;
        
    }
}