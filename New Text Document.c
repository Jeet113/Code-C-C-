#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float D,x1,x2;
    printf("Enter the value of a,b,c(ax^2+bx+c): ");
    scanf("%d,%d,%d",&a,&b,&c);

    D=(b*b)-4*a*c;
    x1=(-b+sqrt(D))/2*a;
    x2=(-b-sqrt(D))/2*a;

    if(D<0){
        printf("Root are imaginary\nNO Soloution");
    }
    else{
        printf("x1:%f\n",x1);
        printf("x2:%f\n",x2);
    }
    printf("\nlol");
    return 0;

}
