#include <unistd.h>

void	ft_putchar (char c);

void	first_line (int x)
{
	int	countX;

	countX = 1;
	while (countX <= x)
	{
		if (countX == 1)
			ft_putchar ('A');
		else if (countX == x)
			ft_putchar ('A');
		else
			ft_putchar ('B');
		countX++;
	}
	ft_putchar ('\n');
}

void	mid_line (x, y)
{
	int	countX;
	int	countY;

	countX = 1;
	countY = 1;
	while (countY <= y - 2)
	{
		while (countX <= x)
		{
			if (countX == 1)
				ft_putchar ('B');
			else if (countX == x)
				ft_putchar ('B');
			else
				ft_putchar (' ');
			countX++;
		}
		ft_putchar ('\n');
		countX = 1;
		countY++;
	}
}

void	last_line (int x)
{
	int	countX;

	countX = 1;
	while (countX <= x)
	{
		if (countX == 1)
			ft_putchar ('C');
		else if (countX == x)
			ft_putchar ('C');
		else
			ft_putchar ('B');
		countX++;
	}
	ft_putchar ('\n');
}

void	rush (int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line (x);
		mid_line (x, y);
		if (y > 1)
		{
			last_line (x);
		}
	}
	else
		write (1, "Enter parameters greater than 0 to get return\n", 47);
}
