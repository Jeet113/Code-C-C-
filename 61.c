#include<stdio.h>
int main(){
    int s1[100],s2[100];
    int i,l;
    scanf("%d",&s1);
    scanf("%d",&s2);
    for(i=0;s1[i]!=0;i++){
        if(s1[i]==s2[i]){
            s1[i]=0;
        }
        else{
            s1[i]=1;
        }
    }
    printf("%d",s1);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[100],s2[100];
//     int i,l;
//     scanf("%s",&s1);
//     scanf("%s",&s2);
//     l=strlen(s1);
//     for(i=0;i<l;i++){
//         if(s1[i]==s2[i]){
//             s1[i]='0';
//         }
//         else{
//             s1[i]='1';
//         }
//     }
//     printf("%s",s1);
//     return 0;
// }