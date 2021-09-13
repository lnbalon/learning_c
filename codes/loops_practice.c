#include <stdio.h>


int main () {

    for (int i=1, j=2; i<=5; i++, j = j+2)
        printf("%d, %d \n", i, j);


    int looper_condition = 1;



    while (looper_condition<5) {
        looper_condition++;
        printf("entered and exited a while loop\n");
    }

    

}