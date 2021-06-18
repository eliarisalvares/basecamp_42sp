#include <unistd.h>

void	write_comb(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		comb01;
	int		comb02;

	comb01 = 0;
	while (comb01 < 99)
	{
		comb02 = comb01 + 1;
		while (comb02 <= 99)
		{
			write_comb(comb01);
			write(1, " ", 1);
			write_comb(comb02);
			if (comb01 != 98 || comb02 != 99)
				write(1, ", ", 2);
			comb02++;
		}
		comb01++;
	}
}
