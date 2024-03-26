#include <stdio.h>

int main() {
  int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;

  printf("Enter the elements of the first matrix:\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // Add the two matrices
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Print the sum of the two matrices
  printf("Sum of the two matrices:\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}