#include <stdio.h>

int line_counter () {
    int c, nl;
    nl = 0;
    while ((c = getchar()) !=EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    return nl;
}


int main () {
    int nl;
    nl = line_counter();
    printf("%d\n", nl);
    return 0;
}