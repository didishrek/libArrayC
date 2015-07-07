/*
** SequentialSearch.c for  in /home/schric_a/Projets/libArrayC/src/integer/
**
** Made by Adrien Schricke
** Login   <schric_a@epitech.eu>
**
** Started on  Sat Jun 20 16:37:14 2015 Adrien Schricke
** Last update Tue Jul  7 16:17:25 2015 Adrien Schricke
*/

#include    <stdlib.h>
#include    "IntegerArray.h"

int   SequentialSearch(int n, int *array, size_t size)
{
  size_t i;

  i = 0;
  if (array == NULL)
    return (-2);
  while (i < size)
  {
    if (array[i] == n)
      return ((int)i);
      i++;
  }
  return (-1);
}
