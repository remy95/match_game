/*
** main.c for main in /home/macmil_r/Videos
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sun Feb 16 22:40:38 2014 a
** Last update Sun Feb 16 22:51:31 2014 a
*/

#include <stdlib.h>
#include "get_next_line.h"
#include "allum.h"

int     main(int ac, char **av)
{
  int   i;
  char  **tab;
  int   ret;
  int   line;
  int   nb;

  i = 0;
  ret = 5;
  if (av[1] != '\0')
    ret = my_getnbr(av[1]);
  tab = my_tab(ret);
  while (i != 500)
    {
      my_show_tab(tab, ret);
      if (my_line_nb(tab) == 0)
        {
	  my_putstr("GAME OVER");
	  exit(0);
	}
      line = my_line(ret);
      nb = my_matches(line);
      if (nb != -1 && line != -1)
        my_ia_round(tab, line, nb);
      i++;
    }
}
