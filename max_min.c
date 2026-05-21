#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],second_max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>second_max && a[i]!=max){
            second_max=a[i];
        }
    }
    printf("%d %d",max,second_max);
    return 0;
}
