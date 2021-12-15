void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	m;

	n = 1;
	m = 0;
	while (tab[n] != '\0')
	{
		if (tab[n] < tab2[n - 1])
		{
			m = tab[n];
			tab[n] = tab[n - 1];
			tab[n - 1] = m;
			n = 1;
		}
		else
		{
			n++;
		}
	}
}
