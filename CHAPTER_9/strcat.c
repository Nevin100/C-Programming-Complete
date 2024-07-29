#include <stdio.h>
#include <string.h>

int main()
{
  char str1[50];
  printf("Enter your good name:");
  fgets(str1, sizeof(str1), stdin);
  
  char str2[50] = " Nevin";
  strcat(str1,str2);
  printf("Conactenated string: %s",str1);
  return 0;
}
