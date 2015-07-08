/*
** InsertionSort.c for  in /home/schric_a/Projets/libArrayC/src/integer
** 
** Made by Adrien Schricke
** Login   <schric_a@epitech.net>
** 
** Started on  Wed Jul  8 23:44:04 2015 Adrien Schricke
** Last update Thu Jul  9 00:12:35 2015 Adrien Schricke
*/

#include	"IntegerArray.h"

void		InsertionSort(int *tab, size_t size)
{
  size_t	i;
  size_t	j;
  int		x;
  
  i = 1;
  while (i < size)
    {
      x = tab[i];
      j = i;
      while (j > 0 && tab[j - 1] > x)
	{
	  tab[j] = tab[j - 1];
	  j--;
	}
      tab[j] = x;
      i++;
    }
}
