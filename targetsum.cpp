#include<iostream>
using namespace std;
int main(){
    int a[]={3,1,2,4,0,6};
    int size=sizeof(a)/sizeof(a[0]);
    int count=0;
    int i,j,k;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            for(k=j+1;k<size;k++){
                if(a[i]+a[j]+a[k]==5){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}