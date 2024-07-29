#include <stdio.h>

int main()
{
  int indian,age;
  printf("Are you an Indian Citizen(y/n): ");
  scanf("%c",&indian);
  if (indian == 'y') 
  {
    printf("Enter the age:");
    scanf("%d",&age);
    if (age < 18)
    {
      printf("You are young my dear!");
    }
    else if (age >= 18 && age < 60)
    {
      printf("You are matured enough sir/ma'am ");
    }
    else{
      printf("You are old,Take care of yourself!!");
    }
  }
  else
  {
    printf("you are a foreigner and this program is only for indian citizens :) ");
  }
  return 0;
}