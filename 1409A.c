#include<stdio.h>
int main(){
    int a=18,b=4,count=0,x;
    while(a!=b){
        x=a%10;
        a=a-x;
        count++;
    }
    printf("%d",count);
}