#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[2*n],i;
    if(n%2==0){
        printf("NO");
    }
    else{
        for(i=1;i<=2*n;i++){
        a[i]=i;
        }
        for(i=1;i<=2*n;i++){
            if(a[i]==a[2*n]==2*n+1){
                
            }
        }
    }
    
}