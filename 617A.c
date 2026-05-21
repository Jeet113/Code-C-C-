#include<stdio.h>
int main(){
    int x,n;
    scanf("%d",&x);
    n=x/5;
    if(x%5==0){
        printf("%d",n);
    }
    else{
        printf("%d",n+1);
    }
    return 0;
}