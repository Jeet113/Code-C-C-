#include<stdio.h>
int main()
{
    // int t;
    // scanf("%d",&t);
    // int j;
    // for(int j=0;j<t;j++){
        int n;
    scanf("%d",&n);
    int a[n];
    int l;
    for(int l=0;l<n;l++){
        scanf("%d",&a[l]);
    }
    int min=a[0];
    int i;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d",i);
    // a[i-1]= min+1;
    // long long int multi=1;
    // int k;
    // for(int k=0;k<n;k++){
    //         multi=multi*a[k];
    // }
    //  printf("%d\n",multi);
    // }
    return 0;
}
