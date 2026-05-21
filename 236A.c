#include<stdio.h>
#include<string.h>
int main(){
    int arr[26];
    int i,count=0;
    for(i=0;i<26;i++){
        arr[i]=0;
    }
    char s[101];
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++){
        arr[s[i]-'a']=1;
    }
    for(i=0;i<26;i++){
        if(arr[i]==1){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}

