#include <stdio.h>

int recursion_factorial(int);

int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  int factorial = recursion_factorial(num);
  printf("The result for %d : %d",num,factorial);
  return 0;
}

int recursion_factorial(int number)
{
  if (number == 0) 
  {
    return 1;
  }
  else
  {
    return number * recursion_factorial(number - 1);
  }
}