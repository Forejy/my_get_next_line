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

	temp = NULL;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	temp = str;
	if (s1)
		while (*s1)
			*str++ = *s1++;
	if (s2)
		while (*s2)
			*str++ = *s2++;
	*str = '\0';
	return (temp);
}

char *ft_file_read(int const fd, char *str)
{
	char    buffer[BUFF_SIZE + 1];
	int     ret;
//tester de traiter le \n dans cette foncito en utilisant un static char **str; et break
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		str = ft_strjoin(str, buffer);
	}
	return (str);
}

int		get_next_line(int const fd, char **line)
{
	static char *str;
	char *s;
	int i;

	s = NULL;
	if (ft_check_error(fd, line) == -1)
		return (-1);
	if (!str)
		str = ft_file_read(fd, str);
	i = 0;
	if (str)
	{
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
			return (0);
		i = 0;
		while (*str != '\n' && *str != '\0')
			s[i++] = *str++;
		s[i] = '\0';
		if (*str == '\n')
			str++;
	}
	*line = s;
	if (!*line || !**line)
	{
		free (s);
		return (0);
	}
	return (1);
}