#include<stdio.h>
int power(int x,int y){
    int ans=1;
    if(y==0) return 1;
    else {
        ans=ans*x*power(x,y-1);
    }
    return ans;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",power(n,m));
}