char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cs;
	unsigned int	cd;

	cs = 0;
	cd = 0;
	while (dest[cd] != '\0')
	{
		cd++;
	}
	while (src[cs] != '\0' && cs < nb)
	{
		dest[cd + cs] = src[cs];
		cs++;
	}
	dest[cs + cd] = '\0';
	return (dest);
}
