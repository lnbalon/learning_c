#include <stdio.h>


int main () {

    for (int i=1, j=2; i<=5; i++, j = j+2)
        printf("%d, %d \n", i, j);


}