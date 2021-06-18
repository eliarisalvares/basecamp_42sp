#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
		{
			write (1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
