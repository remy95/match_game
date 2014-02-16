/*
** count_match.c for count in /home/macmil_r/rendu/allum_1
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sat Feb 15 01:04:13 2014 a
** Last update Sun Feb 16 23:09:10 2014 a
*/

#include "get_next_line.h"

int     my_matche_nb(char *str)
{
  int   i;
  int   nb;

  nb = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '|')
        nb++;
      i++;
    }
  return (nb);
}

int     my_line_nb(char **tab)
{
  int   i;
  int   nb;

  i = 0;
  nb = 0;
  while (tab[i] != '\0')
    {
      if (my_matche_nb(tab[i]) > 0)
        nb++;
      i++;
    }
  return (nb);
}

int     my_matches(int line)
{
  char  *buff;
  int   nb;

  my_putstr("How many do you want to take ? : \n");
  if (line == -1)
    return (-1);
  buff = get_next_line(0);
  nb = my_getnbr(buff);
  if (nb <= 0) /**/
    return (-1);
  return (nb);
}

int     my_line(int line)
{
  char  *buff;
  int   nb;

  my_putstr("Enter a number of line : ");
  buff = get_next_line(0);
  nb = my_getnbr(buff);
  if (nb <= 0 || nb > line)
    {
      my_putstr("Line error\n");
      return (-1);
    }
  return (nb);
}
