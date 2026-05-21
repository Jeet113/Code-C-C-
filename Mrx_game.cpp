#include<iostream>
using namespace std;
int main(){
    int t,y;
    cin>>t;
    while (t-->0)
    {   
        int n;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int k,l,temp=0;
         for(k=0;k<n;k++){
            for(l=0;l<n-1;l++){
                if(a[l]>a[l+1]){
                    temp=a[l];
                    a[l]=a[l+1];
                    a[l+1]=temp;
                }
            }
           
        }
        int N=n-n/2;
        int c[N],j=0;
        for(i=0,j=0;(i<n && j<N);i=i+2,j++){
            c[j]=a[i];  
        }
        
       
        int mex=0;
        for(i=0;i<N;i++){
            if(c[i]==mex){
                mex++;
            }
        }
        cout<<mex<<endl;
    }
    

}