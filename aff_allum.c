/*
** aff_allum.c for allum1 in /home/macmil_r/rendu/allum_1
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Tue Feb  4 12:06:35 2014 a
** Last update Sun Feb 16 23:08:31 2014 a
*/

#include <stdlib.h>
#include <stdio.h>

char	**my_malloc(char **tab, int ret)
{
  tab = malloc(sizeof(char *) * ret + 1);
  if (tab == NULL)
    exit (0);
  return (tab);
}

char	*my_malloc_2(char *tab, int nb)
{
  tab = malloc(sizeof(char) * nb + 1);
  if (tab == NULL)
    exit (0);
  return (tab);
}

char	**my_tab(int ret)
{
  char	**tab;
  int	i;
  int	j;
  int	nb;

  i = 0;
  j = 0;
  nb = 1;
  tab = my_malloc(tab, ret);
  
  while (i != ret)
    {
      tab[i] = my_malloc_2(tab[i], nb);
      while (j != nb)
	{
	  tab[i][j] = '|';
	  j = j + 1;
	}
      tab[i][j] = '\0';
      j = 0;
      i = i + 1;
      nb = nb + 2;
    }
  tab[i] = '\0';
  return (tab);
}

int	my_show_tab(char **tab, int ret)
{
  int	i;
  int	nb;

  nb = 0;
  i = 0;
  while (tab[i] != '\0')
    {
      while (nb++ != ret)
	my_putchar(' ');
      nb = 0;
      my_putstr(tab[i]);
      i = i + 1;
      my_put_nbr(my_matche_nb(tab[i - 1]));
      ret--;
      my_putchar('\n');
    }
}

char	**my_new_tab(int line, int nb, char ** tab)
{
  int	i;
  int	j;
  int	k;

  k = 0;
  j = 0;
  i = line - 1;
  while (tab[i][j] == ' ' && tab[i][j] != '\0')
    j = j + 1;
  while (tab[i][j] != '\0' && k != nb)
    {
      tab[i][j] = ' ';
      j = j + 1;
      k = k + 1;
    }
  return (tab);
} 
