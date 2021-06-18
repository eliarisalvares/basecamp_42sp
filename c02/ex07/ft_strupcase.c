char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
