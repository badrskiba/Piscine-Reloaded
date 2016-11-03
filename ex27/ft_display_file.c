#include "ft_display_file.h"

int		ft_display_file(char *fichier)
{
	int fd;
	char *buffer;

	fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
	if (close(fd) == -1)
	{
		return (1);
	}
	return (0);
}
int main(int ac, char **av)
{
	if ( ac != 2)
	{
		if (ac < 2)
			write(2, "File name missing.\n", 20);
		else if (ac > 2)
			write(2, "Too many arguments.\n", 21);
		return (0);
	}
	if (ac == 2)
	{
		if (ft_display_file(av[1]) == 1)
			write(2,"An read error occurred.\n",25);
		return (0);
	}
}
