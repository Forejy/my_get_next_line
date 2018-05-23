#include "get_next_line.h"

int ft_check_error(int fd, char **line)
{
	if (fd == -1 || !line || BUFF_SIZE <= 0)
		return (-1);
	return (0);
};

int ft_strlen(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
	}
	return (i);

}

char *ft_strjoin(char *s1, char *s2)
{
	char *str;
	char *temp;
	char *temp2;

	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	temp = str;
	temp2 = s1;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	if (s2)
		while (*s2)
			*str++ = *s2++;
	*str = '\0';
	free (temp2);
	return (temp);
}

int		tests_if_nl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int				ft_strlen_til_nl(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

t_string		*ft_file_read(int const fd, char **str)
{
	char		buffer[BUFF_SIZE + 1];
	t_string	*s;
	ssize_t		ret;
	int			i[2];

	if (!(s = malloc(sizeof(t_string))))
		return (NULL);
	if (!(s->str = malloc(sizeof(char))))
		return (NULL);
	s->str[0] = '\0';
	s->lecture = 0;
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		*str = ft_strjoin(*str, buffer);
		s->lecture = 1;
		if((i[0] = tests_if_nl(*str)) >= 0)//Retourne l'indice du \n ou -1 s'il n'y en a pas
			break;
	}
	i[1] = 0;
	if (ret == -1)
	{
		s->lecture = -1;
		return (s);
	}
	else if (s->lecture == 0 && **str == '\0')
	{
		return (s);
	}
	else if (s->lecture >= 0) //Copie dans s jusqu'au \n s'il y a un \n ou s'il n'y a plus rien a lire et pas de \n
	{
		free(s->str);// je dois free ici sinon fuite memoire car s deja malloc
		i[0] = ft_strlen_til_nl(*str);
		if (!(s->str = malloc(sizeof(char) * (i[0] + 1))))
			return (NULL);
		s->lecture = 1;
		while (**str != '\n' && **str)
		{
			s->str[i[1]++] = **str;
			free(&*str);
			(*str)++;
		}
		s->str[i[1]] = '\0';
		if (**str == '\n')
		{
			free(&*str);
			(*str)++;
		}
	}
	return (s);
}
//TODO : Verifier que les caracteres apres le \n sont recuperes lignes 10

t_list		*ft_create_elem(int data)
{
	t_list	*new_elem;
	if (!(new_elem = malloc (sizeof(t_list))))
		return (NULL);
	new_elem->str = NULL;
	new_elem->next = NULL;
	new_elem->fd = data;
	return (new_elem);
}

t_list		*create_list_str(t_list *begin_list, int fd)
{
	t_list	**current;

	current = &begin_list;
	if (begin_list == NULL)
	{
		begin_list = ft_create_elem(fd);
		return (begin_list);
	}
	while (*current != NULL)
	{
		if ((*current)->fd == fd)
			return (*current);
		current = &(*current)->next;
	}
	*current = ft_create_elem(fd);
	return (*current);
}

int			get_next_line(int const fd, char **line)
{
	static t_list	*list_str; //stocke les caracteres depassant (apres \n)
	t_list			*temp;
	t_string		*s_and_info;
	if (ft_check_error(fd, line) == -1)
		return (-1);
	temp = create_list_str(list_str, fd);
	if (list_str == NULL)
		list_str = temp;
	s_and_info = ft_file_read(fd, &(temp->str));
	if (s_and_info == NULL || s_and_info->lecture == -1)
	{
		free((void *)list_str->str);
		free((void *)s_and_info);
		return (-1);
	}
	*line = s_and_info->str;
	if (s_and_info->lecture == 0)
	{
		free((void *)list_str->str);
		free((void *)s_and_info);
		return (0);
	}
	return (1);
}

/*
int			get_next_line(int const fd, char **line)
{
	static char **str;
	t_string	*s_and_info;
	if (ft_check_error(fd, line) == -1)
		return (-1);
	if(!(str))
		if (!(str = (char **) malloc(sizeof(char *) * 1)))
			return (-1);
	s_and_info = ft_file_read(fd, str);
	if (s_and_info == NULL || s_and_info->lecture == -1)
	{
		free((void *)str);
		free((void *)s_and_info);
		return (-1);
	}
	*line = s_and_info->str;
	if (s_and_info->lecture == 0)
		return (0);
	return (1);
}*/