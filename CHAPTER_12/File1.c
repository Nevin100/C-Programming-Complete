#include <stdio.h>

int main()
{
  FILE *file_pointer;
  file_pointer = fopen("kgcoding.txt","r");
  char text[100];
  
  if (file_pointer == NULL)
  {
    printf("\nNo such file exist...");
    return 1;
  }
  fgets(text, 100, file_pointer);
  printf("\n %s", text);
  fclose(file_pointer);
  file_pointer == NULL;
  return 0;
}