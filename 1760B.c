#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);

        char max=s[0];
        int j=1;
        for(j=1;j<n;j++){
            if(max<s[j]){
                max=s[j];
            }
        }
        printf("%d\n",max-96);
    }
    return 0;
}