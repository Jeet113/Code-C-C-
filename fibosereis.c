#include<stdio.h>
int fibo(int n,int a,int b){
    if(n==0) return 0;
    printf("%d ",a);
    fibo(n-1,b,a+b);

}
int main(){
    int x;
    scanf("%d",&x);
    fibo(x,0,1);
}