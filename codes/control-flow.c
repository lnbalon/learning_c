#include <stdio.h>

int main () {
    


    int x;
    int y = 14;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    if (x > y)
        printf("x is greater than y\n");
    else if (x < y)
        printf("y is greater than x\n");
    else
        printf("x and y are equal \n");

}