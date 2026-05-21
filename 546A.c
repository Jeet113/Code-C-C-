#include<stdio.h>
int main(){
    int k,n=0,w,i,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++){
        sum=sum + k*i;
    }
    printf("%d",sum-n);
    return 0;
}