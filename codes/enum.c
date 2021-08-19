#include <stdio.h>


int main () {

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum company c1 = GOOGLE;
    enum company c2 = XEROX;
    enum company c3 = EBAY;

    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%d\n", c3);
}   