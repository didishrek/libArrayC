/*
** DichotomicSearch.c for  in /home/schric_a/Projets/libArrayC/src/integer
** 
** Made by Adrien Schricke
** Login   <schric_a@epitech.net>
** 
** Started on  Tue Jul  7 18:27:18 2015 Adrien Schricke
** Last update Wed Jul  8 23:33:10 2015 Adrien Schricke
*/

#include	"IntegerArray.h"

int		DichotomicSearch(int find, int *tab, size_t size)
{
  size_t	s;
  size_t	e;
  size_t	m;

  if (tab == NULL)
    return (-2);
  
  s = 0;
  e = size - 1;
  while (s <= e)
    {
      m = (s + e) / 2;
      if (find < tab[m])
	e = m - 1;
      else if (find > tab[m])
	s = m + 1;
      else
	return (m);
    }
  return (-1);
}
