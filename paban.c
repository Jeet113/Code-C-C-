#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void DecToBinary(long long int n){
    int bin[32];
    int i=0;
    while(n!=0){
        bin[i]=(n%2);
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]); 
    }
    
}
long long int BinaryToDec(long long int n){
     long long int rem;
    long long int sum=0;
    long long int base=1;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*base;
        base=base*2;
        n=n/10;
    }
    return sum;
}
int main(){
    int t;
    scanf("%d",&t);
    for(long long int i=1;i<=t;i++){
    char str[1000001];
    char s[4];
    scanf("%s %s",str,s);
    long long int x= atoi(str);
    printf("Case %lld:\n",i);
    if(strcmp(s,"dec")==0){
        printf("%x hex\n",x);
        DecToBinary(x);
        printf(" bin\n");
    }
    else if(strcmp(s,"bin")==0){
        long long int dec=BinaryToDec(x);
        printf("%lld dec\n",dec);
        printf("%x hex\n",dec);
    }
    else{
         int y;
        sscanf(str, "%x", &y);
        printf("%d dec\n",y);
        DecToBinary(y);
        printf(" bin\n");

    }

    }
    return 0; 
}
