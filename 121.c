#include<stdio.h>
int main(){
int n;
do {
scanf("%d", &n);
if (n >= 0) {
printf("%s\n", (n%2==0)?"Even":"odd");
}
} while (n >= 0);
}
