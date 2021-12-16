void	ft_lowercase(char *str, int i)
{
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
		i++;
	}
}

void	ft_conditions(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			i++;
			ft_lowercase(str, i);
		}
		if (str[i] <= '9' && str[i] >= '0')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				i++;
			}
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				ft_lowercase(str, i);
			}
		}
		else
			i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	ft_conditions(str);
	return (str);
}
