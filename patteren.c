#include<Stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }

        for(k=1;k<=2*i-1;k++){
            if(k>i){
                printf("%d",2*i-k);
            }
            else{
                printf("%d",k);
            }
        }
        printf("\n");
    }
}