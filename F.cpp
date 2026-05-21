#include<iostream>
using namespace std;
int digitsum(int n){
    int sum=0,rem=0;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    int k;
    cin>>k;
    int i=19,count=0;
    while(1){
        if(digitsum(i)==10){
            count++;
        }
        if(count==k){
            cout<<i<<endl;
            break;
        }
        i=i+9;
    }
}