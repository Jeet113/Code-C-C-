#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t-->0){
        char s[4];
        scanf("%s",&s);
        if(s=='YES'|| s=='yes'||s=='Yes'||s=='YEs'||s=='yES'|| s=='yeS'){
            printf("Yes\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}