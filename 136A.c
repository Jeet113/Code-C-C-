#include<stdio.h>
int main(){
    int n,i,a=0;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        arr[i]=a;
        arr2[a-1]=i;
        printf("%d ",arr2[a-1]);
    }
    return 0;
}

