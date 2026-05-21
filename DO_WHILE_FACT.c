#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    do
    {
        fact=fact*n;
        n--;
    } while (n!=0);
    printf("%d",fact);
    
}