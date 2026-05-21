#include<stdio.h>
int main()
{
    int x,terms,i;
    float sum=1,j=1;
        printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the number of terms:");
    scanf("%d",&terms);

    for(i=1;i<5;i++){
        j=j*3/(i);
        sum=sum+j;
    }
    printf("The sum is : %f\n",sum);
    return 0;
}
