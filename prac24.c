#include <stdio.h>

int main() {
    int x = 10;
    int *px = &x; // px is a pointer to x

    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);

    printf("Address of px: %p\n", &px);
    printf("Value of px: %p\n", px);
    printf("Value of *px: %d\n", *px);

    return 0;
}