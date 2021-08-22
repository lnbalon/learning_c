#include <stdio.h>

 int main() {



    float minutes, days, years; 
    printf("Enter the number of minutes:");
    scanf("%f", &minutes);

    days = minutes / (60*24);
    years = days / 365;
    printf("the number of days are %.2f\n", days);
    printf("the number of years are %.2f\n", years);


}