#include<stdio.h>
int main(){
    int i,t,a,b,c,n,A,B,C;
    A=B=C=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&n);
        
        if((a+b+c+n)%3==0){
            
        int x=(a+b+c+n)/3;
        A=x-a;
        B=x-b;
        C=x-c;
        if(a+A==b+B &&  a+A==c+C){
            printf("YES");
        }
        else{
            printf("NO");
        }
        }
        else{
             printf("NO");
        }

    }
    
    return 0;
}