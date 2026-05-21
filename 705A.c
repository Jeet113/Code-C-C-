#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0 && i!=n){
            printf("I hate that ");
        }
        else if(n%2==0 && i==n){
            printf("I love it ");
        }
        else if(i%2==0 && i!=n){
            printf("I love that ");
        }
        else if(i%2!=0 && i==n){
            printf("I hate it ");
        }
    }
    return 0;
}