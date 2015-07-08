#include "IntegerArray.h"
#include  <stdio.h>
#include  <time.h>

int main(void)
{
  int ar[6] = {5,4,3,2,1,0};
  int *nu = NULL;

  for (int i = 0; i < 6; i++)
    printf("%d\n", ar[i]);

  printf("\n\n");
  InsertionSort(ar, 6);

  for (int i = 0; i < 6; i++)
    printf("%d\n", ar[i]);
  
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
