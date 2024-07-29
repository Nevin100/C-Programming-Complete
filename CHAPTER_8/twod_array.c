#include <stdio.h>

int main()
{
  int arr[2][3];
  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("\nEnter the student %d and marks of subject %d :",(row + 1),(col + 1));
      scanf(" %d",&arr[row][col]);
    }
  }
  return 0;
}