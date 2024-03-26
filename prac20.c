#include <stdio.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    // Create an array of 10 Employee structures
    struct Employee employees[10];

    // Accept information about each employee
    for(int i = 0; i < 10; i++) {
        printf("Enter Name, Age, and Salary of Employee %d: ", i+1);
        scanf("%s %d %f", employees[i].name, &employees[i].age, &employees[i].salary);
    }

    // Display information about each employee
    for(int i = 0; i < 10; i++) {
        printf("\nEmployee %d Info:\n", i+1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}