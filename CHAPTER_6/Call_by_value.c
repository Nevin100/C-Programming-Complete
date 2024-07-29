#include <stdio.h>

void swap(int,int);

int main()
{
  int a = 5;
  int b = 10;
  printf("a: %d,b: %d",a,b);
  printf("\n");
  printf("Before swapping, first: %d & second: %d",a,b);
  printf("\n");
  swap(a,b);
  printf("a: %d,b: %d",a,b); 
  return 0;
}

void swap(int first, int second)
{
  int temp = first;
  first = second;
  second = temp;
  printf("After Swapping, first: %d & second: %d",first,second);
  printf("\n");
}