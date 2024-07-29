#include <stdio.h>

int main()
{
  int p = 3;
  int *j;
  int **k;
  j = &p;
  k = &j;
  printf("\nThe value of p:%d", p);
  printf("\nThe value of j:%d", *j);
  printf("\nThe value of p:%d", *k);
  printf("\nThe Address of p:%p", &p);
  printf("\nThe Address of p:%p", j);
  printf("\nThe Address of j:%p", &j);
  printf("\nThe Address of k:%p", &k);
  printf("\nThe value of p:%d", *(&p));
  printf("\nThe value of p:%d", *j);
  printf("\nThe value of k:%d", *(&k));
  return 0;
}