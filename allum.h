/*
** allum.h for allu	 in /home/macmil_r/Videos
** 
** Made by a
** Login   <macmil_r@epitech.net>
** 
** Started on  Sun Feb 16 22:49:36 2014 a
** Last update Sun Feb 16 22:51:01 2014 a
*/

#ifndef ALLUM_H_
#define ALLUM_H_

char    **my_tab(int ret);
int     my_show_tab(char **tab, int ret);
int     my_matches(int line);
int     my_line(int line);
char    **my_new_tab(int line, int nb, char ** tab);
char    **my_ia_round(char **tab, int line, int nb);

#endif /* !ALLUM_H_ */
