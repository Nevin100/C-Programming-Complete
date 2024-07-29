#include <stdio.h>

int main()
{
  int age;
  printf("Enter the age plz:");
  scanf("%d",&age);
  if (age > 18 && age < 78 )
  {
    printf("You are adult!!");
  }
  else if (age > 78)
  {
    printf("You are old!!");
  }
  else
  {
    printf("You are very young!!");
  }
  return 0;
}