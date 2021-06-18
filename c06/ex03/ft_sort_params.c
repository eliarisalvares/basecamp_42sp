#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_putstr (char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

int 	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' || s2[c] != '\0')
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	return (s1[c] - s2[c]);
}

int	main(int argc, char *argv[])
{
	int		a;
	char	*swap;

	swap = 0;
	a = 1;
	while (a < argc - 1)
	{
		if (a < argc || ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			swap = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = swap;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		a++;
		ft_putchar ('\n');
	}
	return (0);
}
