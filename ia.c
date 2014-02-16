/*
** ia.c for ia in /home/macmil_r/rendu/allum_1
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sat Feb 15 00:15:10 2014 a
** Last update Sun Feb 16 23:09:54 2014 a
*/

#include <stdlib.h>
#include "get_next_line.h"
#include "allum.h"

char    **take_one(char **tab)
{
  int   i;
  int   j;
  int	sucess;

  i = 0;
  j = 0;
  while(sucess != 1)
    {
      if (tab[i][j] == '|')
	{
	  tab[i][j] = ' ';
	  sucess = 1;
	}
      else if (tab[i][j] == '\0')
	{
	  i++;
	  j = 0;
	}
      else
	j++;
    }
  return (tab);
}

char	**my_remove_last(char **tab)
{
  int	i;
  int	j;
  int	sucess;
  int	match;

  i = my_last_line_found(tab);
  j = 0;
  match = my_matche_nb(tab[i]);
  if (match > 1)
    my_last_line_full(tab, i, j, match);
  else
    my_last_line_one(tab, match, j, i);
  return (tab);
}

char    **my_ia(char **tab)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  if (my_line_nb(tab) > 2)
    while (tab[i] != '\0')
      {
        if (my_matche_nb(tab[i]) != 0)
          {
            while (tab[i][j] != '\0')
              {
                tab[i][j] = ' ';
                j++;
              }
            return (tab);
          }
        i++;
      }
  else if (my_line_nb(tab) == 2)
    tab = take_one(tab);
  else if (my_line_nb(tab))
    tab = my_remove_last(tab);
  return (tab);
}

char    **my_ia_round(char **tab, int line, int nb)
{
  tab = my_new_tab(line, nb, tab);
  tab = my_ia(tab);
  if (my_line_nb(tab) == 0)
    {
      my_putstr("GAME OVER");
      exit(0);
    }
  return (tab);
}
