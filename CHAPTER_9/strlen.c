#include <stdio.h>
#include <string.h>

int main()
{
  char name[50];
  printf("Enter the name: ");
  fgets(name , sizeof(name), stdin);

  int size = strlen(name);
  printf("The size of the name: %d",size);
  return 0;
}


