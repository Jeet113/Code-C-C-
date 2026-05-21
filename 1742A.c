#include<stdio.h>
int main(){
    int i,a,b,c,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b==c)|| (c+b==a)|| (a+c==b)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}