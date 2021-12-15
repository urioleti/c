void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	m;
	int	swap;

	n = 0;
	m = size - 1;
	while (n < size / 2)
	{
		swap = tab[n];
		tab[n] = tab[m];
		tab[m] = swap;
		n++;
		m--;
	}
}
