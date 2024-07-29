#include <stdio.h>

void swap_by_ref(int *x,int *y);

int main()
{
  int num1 = 5,num2 = 10;
  printf("\nThe numbers are: num1:%d and num2:%d",num1,num2);
  printf("\nThe values before swapping num1:%d and num2:%d",num1,num2);
  printf("\n");
  swap_by_ref(&num1,&num2);
  printf("\nThe numbers are: num1:%d and num2:%d",num1,num2);
  return 0;

}

void swap_by_ref(int *x,int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
  printf("The value after swapping: num1=%d and num2=%d",*x,*y);
}