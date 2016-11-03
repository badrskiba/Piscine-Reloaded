int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int comp;

	i = 0;
	comp = 0;
	while(tab[i][0] != '\0')
	{
		if(f(tab[i][0]) == 1)
			comp++;
		i++;
	}
	return (compt);
}
