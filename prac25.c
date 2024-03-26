#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}

void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

void divide(int *a, int *b, float *result) {
    if (*b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    *result = (float)*a / *b;
}

int main() {
    int a, b, result;
    float fresult;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    add(&a, &b, &result);
    printf("Sum: %d\n", result);

    subtract(&a, &b, &result);
    printf("Difference: %d\n", result);

    multiply(&a, &b, &result);
    printf("Product: %d\n", result);

    divide(&a, &b, &fresult);
    printf("Quotient: %.2f\n", fresult);

    return 0;
}