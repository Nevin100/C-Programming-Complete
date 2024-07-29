#include <stdio.h>

int main()
{
  int arrr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the %d element of array:",i);
    scanf("%d",&arrr[i]);
  }
  int i = 0;  
  while (i < 5)
  {
    printf("The elements of array :%d\n",arrr[i]);
    i++;
  }
  return 0;
}