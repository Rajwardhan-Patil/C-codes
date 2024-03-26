#include <stdio.h>

int main() 
{
    // Declare variables to store user information
    char name[50];
    int rollNo;
    float percentage;
    char dob[20];
    char branch[30];
    char college[50];

    // Prompt user for input
    printf("Enter your name: ");
    scanf("%s", name);

    //if full name use underscore between your name

    printf("Enter your roll number: ");
    scanf("%d", &rollNo);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("Enter your date of birth (DD/MM/YYYY): ");
    scanf("%s", dob);

    printf("Enter your branch: ");
    scanf("%s", branch);

    printf("Enter your college: ");
    scanf("%s", college);

    // Display the user information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Date of Birth: %s\n", dob);
    printf("Branch, College: %s,%s\n", branch,college);

    return 0;
}
