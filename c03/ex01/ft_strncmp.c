int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				diff;

	count = 0;
	if (n != 0)
	{
		while (s1[count] == s2[count] && s1[count] != '\0'
			&& s2[count] != '\0' && count < n - 1)
		{
			count++;
		}
	}
	else
	{
		return (0);
	}
	diff = (int)(unsigned char) s1[count] - (int)(unsigned char) s2[count];
	return (diff);
}
