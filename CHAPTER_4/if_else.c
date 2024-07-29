#include <stdio.h>

int main()
{
  int age;
  printf("Enter the age plz:");
  scanf("%d",&age);
  if (age > 18)
  {
    printf("You are adult!!");
  }
  else{
    printf("You are not an adult!!");
  }
  return 0;
}