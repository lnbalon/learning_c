#include <stdio.h>

#define OVERTIME 40
#define RATE 12
#define TAX_300 0.15
#define TAX_450 0.20
#define TAX_REST 0.25


int main () {

    float num_hours, overtime, salary;
    float tax;

    printf("Enter the number of hours worked: ");
    scanf("%f", &num_hours);

    overtime = num_hours - OVERTIME;
    
    // get the salary
    if (num_hours <= 40)
        salary = num_hours * RATE;
    else
        salary = (((num_hours - 40) * 1.5) + 40) * RATE;

    // get the tax
    if (salary <= 300)
        tax = salary * TAX_300;
    else if (300 < salary <= 450)
    {
        tax = 300 * TAX_300; 
        tax += ((salary-300) * 0.20);
    }
    else
    {
        tax = 300 * TAX_300; 
        tax += 150 * TAX_450; 
        tax += (salary - 450) * TAX_REST;
    }

    // print result
    printf("Gross Pay %.2f\n", salary);
    printf("Taxes %.2f\n", tax);
    printf("Net Pay %.2f\n", salary - tax);

}
