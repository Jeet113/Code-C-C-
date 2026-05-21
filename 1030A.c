#include<stdio.h>
int main(){
    int i, n;
    int count=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
         count ++;
     }
    }
    if(count>=1){
        printf("HARD");
    }
    else{
        printf("EASY");
    }
    return 0;
}