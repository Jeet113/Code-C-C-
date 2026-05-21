#include<stdio.h>
int main(){
    int a,b,i;
    int count=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("0");
    }
    else{
        while(a<=b){
        a=a*3;
        b=b*2;
        count++;
    }
    }
    
    printf("%d",count);

    return 0;
}