/*
** get_next_line.c for getnextline in /home/macmil_r/rendu/CPE_2013_getnextline
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sun Nov 24 17:12:40 2013 a
** Last update Sun Feb 16 23:10:09 2014 a
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include "get_next_line.h"

char		*get_next_line(const int fd)
{
  static  char	buffer[MEM_SIZE];
  static  int	i;
  static  int   lecture;
  char		*str;
  int		j;

  i = 0;
  j = 0;
  str = malloc(MEM_SIZE * sizeof(char));
  if (str == NULL)
    exit(0);
  lecture = read(fd, buffer, MEM_SIZE);
  if (i == lecture || lecture == -1)
    exit(0);
  while (i < lecture && buffer[i] != '\n')
    {
      str[j] = buffer[i];
      i = i + 1;
      j = j + 1;
    }
  
  if (buffer[i] == '\n')
    i = i + 1;
  str[j] = '\0';
  return (str);
}
