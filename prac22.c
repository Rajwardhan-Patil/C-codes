#include <stdio.h>
#include <string.h>

// Function to calculate the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

// Function to calculate the average of two num      bers
float avg(int a, int b) {
    return (float)(a + b) / 2.0;
}

int main() {
    int num1, num2;

    // Read two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and display the sum, average, and maximum of the numbers
    printf("Sum of %d and %d is: %d\n", num1, num2, add(num1, num2));
    printf("Average of %d and %d is: %.2f\n", num1, num2, avg(num1, num2));
    printf("Maximum of %d and %d is: %d\n", num1, num2, max(num1, num2));

    return 0;
}