#include<stdio.h>
int main(){
    long long int n,x;
    scanf("%lld",&n);
    if(n%2==0){
        n=n/2;
    }
    else{
        n=(-(n/2+1));
    }
    printf("%lld",n);
    return 0;
}
