#include<stdio.h>
int main(){
    int i,n,k,x;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++){
        x=n%10;
        if(x!=0){
            n=n-1;
        }
        else{
            n=(n/10);
        }
    }
    printf("%d",n);
    return 0;
}