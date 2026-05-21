#include<stdio.h>
int main(){
    long long int s[5];
    int i;
    int a=0;
    for(i=0;i<4;i++){
        scanf("%lld",&s[i]);
    }
    for(i=0;i<4;i++){
        if(s[i]==s[i+1] || s[i]==s[i+2] || s[i]==s[i+3]){
            a++;
        }
    }
    printf("%d",a);
    return 0;
}