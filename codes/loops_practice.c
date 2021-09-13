#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define LOWER 1
#define UPPER  20
#define NUMBER_TRIES 5

int main () {
    
    printf("Guess the fucking number!\n");
    printf("Select only numbers from zero to twenty (0 to 20). Capisce? \n");

    srand(time(0));
    int num = (rand() % (LOWER - UPPER + 1)) + LOWER;
    printf("%d\n", num);

    int i=0;

    while (i<NUMBER_TRIES){

        int guess;
        printf("You have %d guess left!\n", NUMBER_TRIES - (i));
        printf("Enter a number: ");
        scanf("%d", &guess);
        
        if (!(1<=guess & guess<=20)){
            printf("Enter a valid number you idiot! You lose one try.\n");
            i++;
            continue;
        }
        else if (num < guess){
            printf("The number is less than your guess\n");
        }
        else if (num > guess){
            printf("The number is greater than your guess!\n");
        }
        else {
            printf("You Guessed Correctly! %d is equal to %d\n", guess, num);
            printf("You Win!\n");
            break;
        }

        i++;
        if (i == NUMBER_TRIES)
            printf("You Lose!\n");
        
    }


}