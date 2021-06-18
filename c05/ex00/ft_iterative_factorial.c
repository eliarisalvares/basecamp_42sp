int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		if (nb > 2147483647)
			return (0);
		res = res * nb;
		nb--;
	}
	return (res);
}
