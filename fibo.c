#include<stdio.h>
int main(){
    int a=1,b=1,temp,n;
    scanf("%d",&n);
    int i;
    for(i=2;i<n;i++){
        temp=a+b;
        a=b;
        b=temp;
        
    }
    printf("%d",temp);
}