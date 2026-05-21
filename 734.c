#include<stdio.h>
#include<string.h>
int main(){
    long int n;
    int i,a=0,d=0;
    scanf("%ld",&n);
    char s[n];
    scanf("%s",&s);
        for(i=0;i<strlen(s);i++){
            if(s[i]=='D'){
            d ++;
        }
        else {
            a++;
        }
        }
    if(a>d){
        printf("Anton");
    }
    else if(a<d){
        printf("Danik");
    }
    else if(a==d){
        printf("Friendship");
    }
    return 0;
}