#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_affichage(char **av)
{
	int	fd;
	int	ret;
	char	buf[1];

	ret = 0;
	fd = open(av[1], O_RDONLY);
	while ((ret = read(fd, buf, 1)))
		write(1, buf, 1);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_affichage(av);
	return(0);
}
