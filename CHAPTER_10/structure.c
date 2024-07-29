#include <stdio.h>

struct Student{
  int rollno;
  char name[20];
  int marks;
};

int main()
{
  struct Student s1;
  printf("Enter the details: \n");
  printf("\nEnter the rollno. :");
  scanf("%d",&s1.rollno);
  printf("\nEnter the name :");
  scanf("%s",s1.name);
  printf("\nEnter the marks :");
  scanf("%d",&s1.marks);

  printf("The deails are: \n");
  printf("Rollno. : %d , Name: %s , Marks: %d",s1.rollno, s1.name, s1.marks);
  return 0;
  
}