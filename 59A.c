#include<stdio.h>
#include<string.h>
int main(){
    int i,a,b,l;
    a=b=0;
    char s[100];
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]>=65 && s[i]<=90){
            a++;
        }
        else if(s[i]>=97 && s[i]<=122){
            b++;
        }
    }
    if(a<b){
        printf("%s",strlwr(s));
    }
    else if(a>b){
        printf("%s",strupr(s));
    }
    else{
        printf("%s",strlwr(s));
    }
    return 0;
}
