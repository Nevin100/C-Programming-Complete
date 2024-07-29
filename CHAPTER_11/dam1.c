#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size;
  int *arr;
  printf("Enter the size of array : ");
  scanf("%d",&size);

  arr = (int*)malloc(sizeof(int) * size);
  if (arr == NULL)
  {
    printf("Not enough Memory!");
    return 1;
  }

  for (int i = 0; i < size; i++)
  {
    printf("Enter the element %d :",i+1);
    scanf("%d",&arr[i]);
  }

  long sum = 0;
  for (int j = 0; j < size; j++)
  {
    sum += arr[j];
  }
  
  printf("The sum of the elements: %ld",sum);
  return 0;
}