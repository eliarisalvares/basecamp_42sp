#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	a = argc - 1;
	if (1 < argc)
	{
		while (a > 0)
		{
			i = 0;
			while (argv[a][i])
			{
				write (1, &argv[a][i], 1);
				i++;
			}
			write (1, "\n", 1);
			a--;
		}
	}
	return (0);
}
