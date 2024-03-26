#include <stdio.h>

int main() {
  int numbers[5], i, sum = 0;

  printf("Enter 5 numbers:\n");

  for (i = 0; i < 5; i++) 
  {
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }

  printf("Sum of the 5 numbers = %d\n", sum);

  return 0;
}