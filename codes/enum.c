#include <stdio.h>


int main () {

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    int c1 = GOOGLE;
    int c2 = XEROX;
    int c3 = EBAY;

    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%d\n", c3);
}   