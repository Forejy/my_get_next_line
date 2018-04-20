#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 1

int		get_next_line(int const fd, char **line);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *s);


#endif