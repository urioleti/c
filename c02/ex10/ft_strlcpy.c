unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	int				i;

	l = 0;
	i = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
