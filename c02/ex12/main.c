void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char	*str;

	str = "Bonjour les amin";
	str = ft_print_memory((void *)str, 16);
	str = "ches\t\n\tc  est fo";
	str = ft_print_memory((void *)str, 16);
	str = "u\ttout\tce qu on ";
	str = ft_print_memory((void *)str, 16);
	str = "peut faire avec\t";
	str = ft_print_memory((void *)str, 16);
	str = "\n\tprint_memory\n\n";
	str = ft_print_memory((void *)str, 16);
	str = "\n\tlol.lol\n \0";
	str = ft_print_memory((void *)str, 12);
	str = "\n\tlol.laaaaol\n ";
	str = ft_print_memory((void *)str, 15);
	str = "\n\tlol.laaaaol\n ";
	str = ft_print_memory((void *)str, 16);
}
