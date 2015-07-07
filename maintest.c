#include "IntegerArray.h"
#include  <stdio.h>
#include  <time.h>

int main(void)
{
  int ar[6] = {10, 5, 32, 12, 16, 1};
  int *nu = NULL;

  printf("Find 5 :\n");
  printf("result : %d\n", SequentialSearch(5, ar, 6));
  printf("good answer : %d\n", 1);

  printf("\n\n");

  printf("Find 1 :\n");
  printf("result : %d\n", SequentialSearch(1, ar, 6));
  printf("good answer : %d\n", 5);

  printf("\n\n");

  printf("Find 5 :\n");
  printf("result : %d\n", SequentialSearch(2, ar, 6));
  printf("good answer : %d\n", -1);

  printf("\n\n");

  printf("Find NULL :\n");
  printf("result : %d\n", SequentialSearch(2, nu, 6));
  printf("good answer : %d\n", -2);


  return (0);
}
