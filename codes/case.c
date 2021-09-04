#include <stdio.h>



int main() {

    int grade;
    grade = 4;

    switch (grade){

        case 1:
            printf("value is equal to 1\n");
            break;
        case 2: 
            printf("value is equal to 2\n");
            break;
        case 3: 
            printf("value is equal to 3\n");
            break;
        case 4: 
            printf("value is equal to 4\n");
            break;
        case 5:
        case 6: 
            printf("value is equal to 5 or 6\n");
            break;
        default:
            printf("whatever!\n");
            break;
        
    }
}

