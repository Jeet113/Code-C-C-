#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    char t[101];
    int value;
    scanf("%s",&s);
    scanf("%s",&t);
    value=strcmp(strrev(t),s);
    if(value==0){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
    
    return 0;
}