#include<stdio.h>
int main()
{
    int a[10],key=5,count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        if(a[i]==key){
            printf("%d is found on %d locztion",key,i+1);
            count=1;
        }
    }
    if(count==0){printf("NOT FOUND");}
    return 0;
}
