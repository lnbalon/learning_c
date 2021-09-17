#include <stdio.h>


int main () {

    printf("Get the average of inputted numbers: \n");

    float numbers[5], total;

    int i; 


    for (i=0; i<5; ++i) {

        printf("%2u> ",i+1);
        scanf("%f", &numbers[i]); 
        total += numbers[i];
    }

    printf("the total is %f\n", total);
    printf("the average is %f\n", total/5);

}