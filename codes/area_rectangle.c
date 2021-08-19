#include <stdio.h>


int main() {

    double width, height, perimeter, area;
    width = 10.0;
    height = 32;
    perimeter = (2*width) + (2*height);
    area = width * height;

    printf("Width: %.2f Height: %.2f \n", width, height);
    printf("Area: %.2f, Perimeter: %.2f \n", area, perimeter);
}