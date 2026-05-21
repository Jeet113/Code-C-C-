#include<stdio.h>
int main(){
    int n,m,flag=0,i,j,k,l;
    scanf("%d %d",&n,&m);
    char s[n+1][m+1];
    for(i=0; i<n; i++){
        for( j=0; j<m; j++){
            scanf("%s",&s[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(s[i][j]=='C' || s[i][j]=='M' || s[i][j]=='Y'){
                flag++;
            }
        }
    }
   if(flag==0) printf("#Black&White");
   else printf("#Color");
    return 0;
}