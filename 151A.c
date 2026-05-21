#include<stdio.h>
int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int a,x,y,z;
    a=k*l;
    x=a/nl;
    y=c*d;
    z=p/np;
    if(x<y && x<z){
        printf("%d",x/n);
    }
    else if(y<x && y<z){
        printf("%d",y/n);
    }
    else {
        printf("%d",z/n);
    }
    
    return 0;
}