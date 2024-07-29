#include <stdio.h>

int main()
{
  FILE *file_pointer;
  file_pointer = fopen("kgcoding.txt","a");
  if (file_pointer == NULL)
  {
    printf("Error!!!");
    return 1;
  }
  fprintf(file_pointer, "KG CODING OP");
  fclose(file_pointer);
  file_pointer == NULL;
  return 0;
}