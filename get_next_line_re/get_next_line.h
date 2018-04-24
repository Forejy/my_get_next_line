#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 100000

typedef struct		s_string
{
	char	*str;
	int		lecture;
}					t_string;

typedef struct		s_list
{
	char			*str;
	int				fd;
	struct s_list	*next;
}					t_list;


int		get_next_line(int const fd, char **line);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *s);


#endif