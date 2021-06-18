#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


float cel_fahr_while () {
    printf("temperature converter using while loop...")
    float cel, fahr;
    fahr = LOWER;
    while (fahr <= UPPER) {
        cel = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, cel);
        fahr = fahr + STEP;
    }
}


int main (){

    cel_fahr_while();

    
    return 0;
}