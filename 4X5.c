#include<stdio.h>
int main(){
    int i,j;
    int a[4][5];
    for(i=0;i<4;i++){
       for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);
       } 
    }
    int max=a[0][0];
    for(i=0;i<4;i++){
       for(j=0;j<5;j++){
        if(max<a[i][j]){
            max=a[i][j];
        }
       } 
    }
    for(i=0;i<4;i++){
       for(j=0;j<5;j++){
        if(a[i][j]==max){
           printf("%d",j);
        }
       } 
    }
    return 0;
}