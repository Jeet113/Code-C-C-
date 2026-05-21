#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int i,j,temp;
    scanf("%s",s);
    for (i = 0; i < strlen(s)-1; i++) {
      for (j =1; j <strlen(s); j++) {
         if (s[i] > s[j+1]) {
            temp = s[i];
            s[i] = s[j+1];
            s[j+1] = temp;
         }
      }
   }
   printf("%s",s);
    return 0;
}