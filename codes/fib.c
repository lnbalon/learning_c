#include<stdio.h>


int fib(int n) {
    // A function that returns the nth Fibonacci Number

    int fib=1;
    
    if (n==0) {
        return 0;
    }
    else if (n <= 2) {
        return 1;
    }
    else {
        int counter=2, a=1, b=1;
        for (counter; counter<n; counter++) {
            a = b;
            b = fib;
            fib = a + b;
        }
    }
    return fib;
}



int main () {

    int i;
    for (i=0; i<=10; i++)
        printf("%d: %d\n", i, fib(i));
    return 0;
}