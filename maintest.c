#include "IntegerArray.h"
#include  <stdio.h>
#include  <time.h>

int main(void)
{
  int ar[6] = {0,1,2,3,4,5};
  int *nu = NULL;

  printf("Find 5 :\n");
  printf("result : %d\n", SequentialSearch(5, ar, 6));
  printf("result : %d\n", DichotomicSearch(5, ar, 6));

  printf("\n\n");

  printf("Find 1 :\n");
  printf("result : %d\n", SequentialSearch(1, ar, 6));
  printf("result : %d\n", DichotomicSearch(1, ar, 6));
  printf("good answer : %d\n", 5);

  printf("\n\n");

  printf("Find 36 :\n");
  printf("result : %d\n", SequentialSearch(36, ar, 6));
  printf("result : %d\n", DichotomicSearch(36, ar, 6));
  printf("good answer : %d\n", -1);

  printf("\n\n");

  printf("Find NULL :\n");
  printf("result : %d\n", SequentialSearch(2, nu, 6));
  printf("result : %d\n", DichotomicSearch(2, nu, 6));
  printf("good answer : %d\n", -2);
  return (0);
}
