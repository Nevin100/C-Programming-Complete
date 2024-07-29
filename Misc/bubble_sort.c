#include <stdio.h>

void print_arr(int arr[],int count);
void bubble_sort(int arr[],int count1);

int main()
{
  int ar[] = {45,65,32,12,98};
  int size = sizeof(ar)/sizeof(ar[0]);
  printf("\n Before sorting, The array elements are: ");
  print_arr(ar,size);
  printf("\n After sorting, The array elements are: ");
  bubble_sort(ar,size);
  print_arr(ar,size);
  return 0;
}

void print_arr(int arr[],int count)
{
  for(int i = 0; i < count; i++)
  {
    printf("\nThe element %d of array: %d", (i+1),arr[i]);
  }
}

void bubble_sort(int arr[], int count1)
{
  int i,j;
  int temp;
  for( i = 0; i < count1; i++)
  {
    for (j = i+1; j < count1; j++)
    {
      if (arr[j] < arr[i] )
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}