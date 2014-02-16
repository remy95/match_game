/*
** my_last_line.c for last_line in /home/macmil_r/rendu/Allum1
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sun Feb 16 23:02:59 2014 a
** Last update Sun Feb 16 23:13:36 2014 a
*/

char    **my_last_line_full(char **tab, int i, int j, int match)
{
  while (match != 1)
    {
      if (tab[i][j] == '|')
        {
          tab[i][j] = ' ';
          match--;
          j++;
        }
      else
        j++;
    }
  return (tab);
}

char    **my_last_line_one(char **tab, int match, int j, int i)
{
  while (match != 0)
    {
      if (tab[i][j] == '|')
        {
          tab[i][j] = ' ';
          match--;
        }
      else
        j++;
    }
  return (tab);
}

int     my_last_line_found(char **tab)
{
  int	i;
  int	j;
  int	sucess;

  i = 0;
  j = 0;

  while (sucess != 1)
    {
      if (tab[i][j] == '|')
        sucess = 1;
      else if (tab[i][j] == '\0')
        {
          i++;
          j = 0;
        }
      else
        j++;
    }
  return (i);
}
