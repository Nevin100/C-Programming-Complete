#include <stdio.h>

void count_to_100();
int sum(int a,int b);

int main()
{
  int x,y;
  printf("Enter the first number: ");
  scanf("%d",&x);
  printf("Enter the second number: ");
  scanf("%d",&y);
  int sum100 = sum(x,y);
  printf("The returned value obtained from the sum fn: %d",sum100);
  printf("\n");
  count_to_100();
  return 0;
}
void count_to_100()
{
  printf("\n Counting from 1 to 100 with the help of function \n");
  for(int i = 1;i <= 100;i++)
  {
    printf("%d ",i);
  }
}
int sum(int a,int b)
{
  return (a+b);
}