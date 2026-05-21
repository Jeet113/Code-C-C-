#include <stdio.h>

int main() {
    int n, d, multiplier=1,result = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    printf("Enter a digit to replace: ");
    scanf("%d", &d);
    
    while (n != 0) {
        int digit = n % 10;
        if (digit == d) {
            digit = 0;
        }
        result += digit * multiplier;
        n /= 10;
        multiplier=multiplier*10;
    }
    printf("%d",result);
    
    return 0;
}
