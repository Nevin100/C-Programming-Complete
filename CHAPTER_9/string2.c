#include <stdio.h>

int main()
{
  char str[50];
  puts("Enter Your name: ");
  gets(str);
  printf("Good Evening %s",str);
  printf("\n");
  printf("Enter your nickname: ");
  fgets(str , sizeof(str), stdin);
  puts(str);
  return 0;
}