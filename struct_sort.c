#include<stdio.h>
struct student
{
    int id;
    char dept[10];
    float cgpa;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student info[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&info[i].id,info[i].dept,&info[i].cgpa);
    }
    float temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(info[j].cgpa>info[j+1].cgpa){
                temp=info[j].cgpa;
                info[j].cgpa=info[j+1].cgpa;
                info[j+1].cgpa=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d %s %0.2f\n",info[i].id,info[i].dept,info[i].cgpa);
    }
    return 0;
}

