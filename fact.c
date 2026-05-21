#include<stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);
    start:
    if(n==0){
        goto finish;
    }
    else{
        fact=fact*n;
    }
    n--;
    goto start;
    finish:
    printf("%d",fact);
    return 0;
}