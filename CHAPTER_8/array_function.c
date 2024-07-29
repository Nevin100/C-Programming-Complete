#include <stdio.h>

void print_marks( int arr[], int count);

int main()
{
  int marks[100];
  int size;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  for (int i = 0; i < size; i++)
  {
    printf("Enter the marks of student %d\n:", (i+1));
    scanf("%d",&marks[i]);
  }
  print_marks(marks,size);
  return 0;

}

void print_marks( int arr[], int count)
{
  for (int j = 0; j < count; j++)
  {
    printf("The marks of student %d: %d\n", (j+1) ,arr[j]);
  }
}

