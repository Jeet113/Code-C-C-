#include <stdio.h>


int main()
{
    int n,k;

    scanf("%d %d",&n,&k);
    
    if(k<=(n+1)/2){
        printf("%d",k*2-1);
    }
    else{
        printf("%d",(k - (n + 1) / 2) * 2);
    }
    return 0;
}
