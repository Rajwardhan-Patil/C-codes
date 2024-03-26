#include<stdio.h>

int main()
{
    int matrix1[3][3],i, j;

  printf("Enter the elements of the first matrix:\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d    ",matrix1[i][j]);
    }
    printf("\n");
  }

return 0;
}
