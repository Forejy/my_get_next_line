#include <stdio.h>
#include <sys/fcntl.h>
#include <wait.h>
#include "get_next_line.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int main(int ac, char **av)
{
	int  fd0;
	int  fd1;
	int  fd2;
	char *line0[1];
	char *line1[1];
	char *line2[1];

	fd0 = open(av[1], O_RDONLY);
	if (get_next_line(fd0, line0) != -1)
	{
		ft_putstr(*line0);
		if(close(fd0) == -1)
		{
			ft_putstr("close_error");
			return (-1);
		}
	}
	else
	{
		ft_putstr("error");
		return (-1);
	}
	ft_putchar('\n');
	fd0 = open(av[2], O_RDONLY);
	if (get_next_line(fd0, line1) != -1)
	{
		ft_putstr(*line1);
		if (close(fd0) == -1)
		{
			ft_putstr("close_error");
			return (-1);
		}
	}
	else
	{
		ft_putstr("error");
		return (-1);
	}
	ft_putchar('\n');
	fd2 = open(av[1], O_RDONLY);
	if (get_next_line(fd2, line2) != -1)
	{
		ft_putstr(*line2);
		if (close(fd1) == -1)
		{
			ft_putstr("close_error");
			return (-1);
		}
	}
	else
	{
		ft_putstr("error");
		return (-1);
	}
	return (0);
}
/*
int main(int argc, char **argv) {
	int		fd;
	int		fd2;
	char	*line;
	pid_t	child;
	char	n = '\n';
	fd  = open(argv[1], O_RDONLY);
	fd2 = open("me.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd == -1 || fd2 == -1) {
		perror("open");
		close(fd);
		close(fd2);
		return (-1);
	}
	while (get_next_line(fd, &line) == 1) {
		write(fd2, line, ft_strlen(line));
		write(fd2, &n,
		      1);                    // attention si le fichier test n a pas de \n et que ca affiche une erreur c'est normal
		free(line);                            // vous inquietez pas
	}
	close(fd);
	close(fd2);
	child = fork();
	if (child == 0) {
		char *arg[] = {"/usr/bin/diff", NULL, "me.txt", NULL};

		arg[1] = argv[1];
		execve(arg[0], arg, NULL);
		exit(0);
	}
	else
		wait(NULL); // bad code I know ... but it's not the project
	(void) argc;
	(void) argv;
	return (0);
}*/