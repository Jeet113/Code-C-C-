#include<stdio.h>
int main(){
    int y,w;
    scanf("%d %d",&y,&w);
    if(y>w){
        if (y==1) printf("1/1");
        else if(y==2) printf("5/6");
        else if(y==3) printf("2/3");
        else if(y==4) printf("1/2");
        else if(y==5) printf("1/3");
        else if(y==6) printf("1/6");
    }
    else{
        if (w==1) printf("1/1");
        else if(w==2) printf("5/6");
        else if(w==3) printf("2/3");
        else if(w==4) printf("1/2");
        else if(w==5) printf("1/3");
        else if(w==6) printf("1/6");
    }
    return 0;

}