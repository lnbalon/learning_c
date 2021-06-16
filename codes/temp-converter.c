#include <stdio.h>

int main (){

    int fahr, cel;
    int start, stop, increment;
    start = 1;
    stop = 10;
    increment = 1;
    while (start <= stop){
        printf("%d\n", start);
        start = start + increment;


    }
    return 0;
}