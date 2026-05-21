#include<stdio.h>
#include<math.h>
int main(){
    int i,k,n,sum=0;
    scanf("%d %d",&k,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++){
        sum=sum-a[i];
    }
    printf("%d",sum);
    return 0;
}