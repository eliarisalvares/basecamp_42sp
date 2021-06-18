char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 97 && str[c] <= 122))
		{
			str[c] = str[c] - 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 65 && str[c] <= 90))
			str[c] = str[c] + 32;
		else if ((str[c] < 48) || (str[c] > 57 && str[c] < 65)
			|| (str[c] > 90 && str[c] < 97) || (str[c] > 122))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
