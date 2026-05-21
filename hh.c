#include<stdio.h>
int main ()
{
	int t,x,i;
	scanf("%d",t);
	for(i=1;i<=t;i++){
		scanf("%d",&x);
		int a=(x*60)/30;
		printf("%d",a);
	}
    return 0;
}
