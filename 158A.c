#include<stdio.h>
int main(){
    int n,k,i;
    int c=0;
    scanf("%d %d",&n,&k);
    int s[n];
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        if(s[i]>=s[k-1] && s[i]!=0){
            c++;
        }
    }
    printf("%d",c);
 
    return 0;
}