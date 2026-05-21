#include<stdio.h>
#include<string.h>
int main(){
    int i,l,j,flag=0;
    char s[101];
    scanf("%s",&s);
    l=strlen(s)-1;
    for(i=l;i>=0;i--){
        if(s[i]=='a'){
            flag++;
            break;
        }
    }
    if(flag==0)printf("-1");
    else {
        printf("%d",i+1);
    }
    return 0;
}