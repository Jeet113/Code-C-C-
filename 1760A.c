#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c){
            if(b>c) printf("%d\n",b);
            else printf("%d\n",c);
        }
        else if(b>c && b>a){
            if(a>c) printf("%d\n",a);
            else printf("%d\n",c);
        }
        else if(c>b && c>a){
            if(b>a) printf("%d\n",b);
            else printf("%d\n",a);
        }
    }
    return 0;
}