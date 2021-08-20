#include <stdio.h>

int main() {

    int a = 12, b = 14;

    int result;
    result = a % b;
    printf("%d\n", result);
    printf("%d\n", a++);
    printf("%d\n", ++a);

    _Bool c = 1;
    _Bool d = 0;
    _Bool new_result;

    new_result = c && d;

    printf("%d\n", new_result);
    printf("%d\n", !(c&&d));
}