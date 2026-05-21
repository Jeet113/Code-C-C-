#include<stdio.h>
int main()
{
    float phy,che,math,bio,com;
    float sum,percentage;
    printf("Enter the number of physics:");
    scanf("%f\n",&phy);
    printf("Enter the number of chemistry:");
    scanf("%f\n",&che);
    printf("Enter the number of math:");
    scanf("%f\n",&math);
    printf("Enter the number of biology:");
    scanf("%f\n",&bio);
    printf("Enter the number of computer:");
    scanf("%f\n",&com);
    sum=phy+che+math+bio+com;
    percentage=(sum/500)*100;
    printf("%0.2f",percentage);




    return 0;
}
