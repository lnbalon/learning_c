#include<stdio.h>


int fib(int n) {
    // A function that returns the nth Fibonacci Number

    int fib;

    if (n <= 1) 
        fib = 1;
    else {
        int counter, a, b;
        counter = 1;
        a = 1;
        b =1;
        fib = 1;
        while (counter < n) {
            
            a = b;
            b = fib;
            fib = a + b;
            counter++;
        }
    }
    printf("%d\n",fib);
    return fib;

}



int main () {

    int i;
    for (i=0; i<10; i++)
        fib(i);
    return 0;
}