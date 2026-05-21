#include<stdio.h>
int main(){
    int x=0;
    int n,i;
    scanf("%d",&n);
    char s[4];
    for(i=1;i<=n;i++){
        scanf("%s",&s);
        if(s[1]== '+'){
            x++;
        }
        else if(s[1]== '-'){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}