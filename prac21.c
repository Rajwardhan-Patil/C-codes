#include <stdio.h>
#include <string.h>
#include <math.h>
#include <corecrt_math_defines.h>

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

// Function to calculate the length of a string
int calculateStringLength(char str[]) {
    return strlen(str);
}

// Function to convert a string to uppercase
void convertStringToUppercase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strncmp(str1, str2, calculateStringLength(str1));
}

int main() {
    double radius;
    char str1[100], str2[100];

    // Read the radius of a circle
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    // Calculate and display the area of the circle
    printf("Area of the circle: %.2f\n", calculateCircleArea(radius));

    // Read two strings
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    // Convert the strings to uppercase
    convertStringToUppercase(str1);
    convertStringToUppercase(str2);

    // Compare the strings
    if (compareStrings(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}