#include<stdio.h>
#include<stdlib.h>

int UPPER = 365;
int LOWER = 1;
int NUM_OF_RUNS = 20;

int generate_random_number(int lower, int upper) {

    // Function to generate random integer from lower to upper

    return (rand() % (upper - lower + 1)) + lower;
}



int main () {
    
    int i,j;
    int n[NUM_OF_RUNS];

    for (i=0; i<NUM_OF_RUNS; i++)
        n[i] = generate_random_number(LOWER, UPPER);
    
    for (j=0; j<NUM_OF_RUNS; j++)
        printf("Element[%d] = %d\n", j, n[j]);

    return 0;

}