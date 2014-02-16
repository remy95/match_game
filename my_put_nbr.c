/*
** my_put_nbr.c for put in /home/macmil_r/Videos
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sun Feb 16 22:35:34 2014 a
** Last update Sun Feb 16 22:35:41 2014 a
*/

int     my_put_nbr(int nb)
{
  if (nb < 0)
    {
      write(1, "-", 1);
      nb = -nb;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + 48);
}
