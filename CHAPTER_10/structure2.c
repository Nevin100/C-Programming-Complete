#include <stdio.h>

struct Student{
  int rollno;
  char name[20];
  int marks;
};

int main()
{
  struct Student students[5] =
  {
    {1, "Sameer", 98},
    {2, "Shyam", 99},
    {3, "Tanvi", 100},
    {4, "Nevin", 100},
    {5, "Ayush", 100}
  };
  for (int i = 0; i < 5; i++)
  {
    printf("\nRollno. :%d",students[i].rollno);
    printf("\nName :%s",students[i].name);
    printf("\nMarks :%d",students[i].marks);
  }
  return 0;
}