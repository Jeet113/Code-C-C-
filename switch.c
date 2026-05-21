#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    float bonus;
    switch (x)
    {
    case 10000 :
        printf("Bonus is %f",x*0.08);
        break;
    case 8000 :
        printf("Bonus is %f",x*0.05);
        break;
    case 6000 :
        printf("Bonus is %f",x*0.02);
        break;
    
    default:
        printf("Bonus is %f",x*0.01);
        break;
    }
    return 0;
}