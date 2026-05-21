#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,temp;
        temp=x;
        int i=1;
        while(1){
            if(temp<2) break;
            else{
                temp=temp/2;
                i++;
            }
        }
        int n=i+1;
        int a[n];
        for(int i=0;i<n-1;i++){
            a[i]=0;
        }
        a[n-1]=1;
        int diff=pow(2,n)-x;
        for(int i=diff;i>0;i--){
            int j=0;
            while(1){
            if(diff<2) break;
            else{
                diff=diff/2;
                j++;
            }
            a[j]=-1;
            diff-=pow(2,j);
            if(i==1) a[0]=-1;
        }
        }
        cout<<n<<endl;
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
    }
}