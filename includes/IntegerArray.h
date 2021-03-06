/*
** IntegerArray.h for  in /home/schric_a/Projets/libArrayC/includes/
**
** Made by Adrien Schricke
** Login   <schric_a@epitech.eu>
**
** Started on  Fri Jun 19 17:27:46 2015 Adrien Schricke
** Last update Thu Jul  9 00:04:54 2015 Adrien Schricke
*/

#ifndef   INTEGERARRAY_H_
# define  INTEGERARRAY_H_

# include <stdlib.h>

/* Sort */
/* Insertion Sort */
void	InsertionSort(int *, size_t);

/* Introsort */



/* Search */
/* Unsorted Array */
/* Sequential search */
int   SequentialSearch(int, int *, size_t);

/* Sorted Array */
/* Dichotomic search */
int	DichotomicSearch(int, int *, size_t);

#endif    /* !INTEGERARRAY_H_ */
