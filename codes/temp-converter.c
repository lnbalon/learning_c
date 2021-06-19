#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


int cel_fahr_while () {
    printf("temperature converter using while loop...\n");
    printf("fahr---cel\n");
    float cel, fahr;
    fahr = LOWER;
    while (fahr <= UPPER) {
        cel = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, cel);
        fahr = fahr + STEP;
    }
}


int cel_fahr_for () {
    printf("temperature converter using for loop...\n");
    printf("fahr---cel\n");
    float fahr;
    fahr = LOWER;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}

int get_char () {
    int c;
    char value = ((c = getchar()) != EOF);
    while (value)
    {
        printf("%d\n", c);
        value = ((c = getchar()) != EOF);
    }
    return 0;
}



int main (){

    /* cel_fahr_while(); */
    /* cel_fahr_for(); */
    printf("%d", getchar() != EOF);
    return 0;

}