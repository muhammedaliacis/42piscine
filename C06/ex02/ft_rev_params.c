
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (1 < argc)
	{
		j = 0;
		while (argv[argc - 1][j])
		{
			write(1, &argv[argc - 1][j], 1);
			j++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
