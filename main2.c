#include <stdio.h>
#include <sys/fcntl.h>
#include <wait.h>
#include <errno.h>
#include <string.h>
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


/*
int main(int ac, char **av)
{

	int  fd0;
	int		fd1;
	int		fd2;
	int		test_valeur;
	char	*line0[1];
	char	*line1[1];
	char	*line2[1];
	int 	i = 0;


//	TEST 40
	char 	*line;
	int		out;
	int		p[2];
	char 	*str;
	int		len = 50;

	/*str = (char *)malloc(1000 * 1000);
	*str = '\0';
	while (len--)
		strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
	out = dup(1);
	pipe(p);
	dup2(p[1], 1);

	if (str)
		write(1, str, strlen(str));
	close(p[1]);
	dup2(out, 1);
	get_next_line(p[0], &line);
	printf("%s\n%s\n", str, line);
	printf("%d\n", strcmp(line, str));


	La rediction ./a.out < fichier, redirige vers l'entree standard 0
	fd0 = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_RDONLY);
	fd2 = open(av[3], O_RDONLY);
	if (fd0 == -1 || fd1 == -1)
	{
		ft_putstr("open_error\n");
		printf("ERROR: %s\n", strerror(errno));
		return (-1);
	}
		else
	{
		while ((test_valeur = get_next_line(fd0, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
/*		if ((test_valeur = get_next_line(fd1, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
		if ((test_valeur = get_next_line(fd0, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
		if ((test_valeur = get_next_line(fd2, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
		if ((test_valeur = get_next_line(fd1, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
		if ((test_valeur = get_next_line(fd0, line0)) > 0)
		{
			//printf("%d\n", strcmp(*line0, "oiuytrew"));
			ft_putstr(*line0);
			ft_putstr("\n");
		}
		//printf("%d\n", test_valeur);
		if (close(fd0) == -1)
		{
			ft_putstr("close_error\n");
			printf("ERROR: %s\n", strerror(errno));
			return (-1);
		}
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
#endif*/
	/*return (0);
}*/

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
}