void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		swap;

	count = 0;
	size--;
	while (count < size)
	{
		swap = tab[count];
		tab[count] = tab[size];
		tab[size] = swap;
		count++;
		size--;
	}
}
