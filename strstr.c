#include <stdio.h>
#include <string.h>

int main() {
    const char *haystack = "Hello, world!fyctrd";
    const char *needle = "world";

    char *result = strstr(haystack, needle);

    printf("%s",result);

    return 0;
}
