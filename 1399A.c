#include<stdio.h>
int main(){
    int n,t,i,j;
    int count=0;
    scanf("%d",&t);
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=t;i++){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]==a[j+1]){
                    count++;
                }
            }
        }
    }
    if(count>0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}