unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count1;
	unsigned int	count2;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	count1 = ft_strlen(dest);
	count2 = 0;
	while (src[count2] != '\0' && count1 + 1 < size)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[count2]));
}
