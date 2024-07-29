#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50];
  printf("Enter your good name:");
  fgets(str1, sizeof(str1), stdin);
  
  char str2[50];
  strcpy(str2,str1);
  puts("The copy string :");
  puts(str2);
  printf("Succesfully copied!!");
  return 0;
}
