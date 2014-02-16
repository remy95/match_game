/*
** my_getnbr.c for my_getnbr.c in /home/macmil_r/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Mon Oct 21 11:58:14 2013 a
** Last update Sun Feb 16 23:13:58 2014 a
*/

int     my_getnbr(char *str)
{
  int	result;

  if (*str == '-')
    return (-my_getnbr(str + 1));
  if (*str == '+')
    return (my_getnbr(str + 1));
  result = 0;
  while (*str && (*str >= '0' && *str <= '9'))
    {
      result = result * 10;
      result = result + *str - '0';
      str = str + 1;
    }
  return (result);
}
