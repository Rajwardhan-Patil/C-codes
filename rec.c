#include <stdio.h>

// Function declaration for factorial
int factorial(int n);

int main() {
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Factorial of %d is %d", num, factorial(num));
  return 0;
}

// Function definition for factorial
int factorial(int n) {
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}