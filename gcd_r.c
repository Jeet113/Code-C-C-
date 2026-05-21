#include<stdio.h>
int gcd(int a,int b){
    if(a==b) return a;
    else if(a>b){
         gcd(a-b,b);
    }
    else{
         gcd(a,b-a);
    }
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("GCD %d",gcd(x,y));
    return 0;
}