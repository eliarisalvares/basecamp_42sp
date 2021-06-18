char	*ft_strstr(char *str, char *to_find)
{
	int	count1;
	int	count2;

	count1 = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (str[count1 + count2] == to_find[count2]
			&& str[count1 + count2] != '\0')
		{
			if (to_find[count2 + 1] == '\0')
				return (&str[count1]);
			count2++;
		}
		count1++;
	}
	return (0);
}
